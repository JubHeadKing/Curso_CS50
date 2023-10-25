from flask import Flask, g, redirect, render_template, request, session, url_for, flash
from werkzeug.security import check_password_hash, generate_password_hash
from flask_session import Session
from helpers import login_required
from flask_mysqldb import MySQL


app = Flask(__name__)

app.secret_key = "secret"
app.config["TEMPLATES_AUTO_RELOAD"] = True
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
app.config['MYSQL_HOST'] = 'localhost'
app.config['MYSQL_USER'] = 'root'
app.config['MYSQL_PASSWORD'] = ''
app.config['MYSQL_DB'] = 'mask_db'
mysql = MySQL(app)

@app.route("/", methods=["GET", "POST"])
def login():
    session.clear()

    if request.method == "POST":

        if not request.form.get("username"):
            return redirect(url_for('login'))


        elif not request.form.get("password"):
            return redirect(url_for('login'))
        cur = mysql.connection.cursor()
        cur.execute("SELECT * FROM administrador WHERE username = %s", [request.form.get("username")])
        data = cur.fetchall ()
        cur.close()
        if len(data) != 1 or not check_password_hash(data[0][2], request.form.get("password")):
            error = 'Invalid username or password. Please try again!'
            return render_template("login.html", error=error)

        session["user_id"] = data[0][0]

        return redirect("/dashboard")
    else:
        return render_template("login.html")

@app.route('/dashboard', methods=["GET", "POST"])
@login_required
def dashboard():
    cur = mysql.connection.cursor()
    cur.execute("SELECT SUM(con_mask) AS number FROM registro")
    con_mask = cur.fetchall ()
    cur.close()
    cur = mysql.connection.cursor()
    cur.execute("SELECT SUM(sin_mask) AS number FROM registro")
    sin_mask = cur.fetchall ()
    cur.close()
    integral = con_mask[0][0]
    integer = sin_mask[0][0]
    return render_template("dashboard.html", integral=integral, integer=integer)

@app.route("/logout")
def logout():

    session.clear()

    return redirect(url_for("login"))


@app.route("/changepassword", methods=["GET", "POST"])
@login_required
def changepassword():


    if request.method == "GET":
        return render_template("changepassword.html")

    if request.method == "POST":

        if not request.form.get("npassword"):
            return redirect(url_for('changepassword'))

        elif not request.form.get("confirmation"):
            return redirect(url_for('changepassword'))

        elif request.form.get("npassword") != request.form.get("confirmation"):
            return "same"

        else:
            cur = mysql.connection.cursor()
            cur.execute("UPDATE administrador SET password = %s WHERE id = 1", [generate_password_hash(request.form.get("npassword"))])
            mysql.connection.commit()
            return redirect(url_for('login'))