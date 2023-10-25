from cs50 import SQL

db = SQL("sqlite:///users.db")

db.execute('''
            CREATE TABLE IF NOT EXISTS user(
                id INTEGER PRIMARY KEY,
                usuario TEXT NOT NULL,
                pasword TEXT NOT NULL)'''
                )

us = input("Ingrese usuario: ")
passw = input("Ingrese la contraseña: ")

db.execute('''
            INSERT INTO user(usuario, pasword) VALUES(?, ?)
            ''', us, passw)