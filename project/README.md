# Sistema de alarma con detector de mascarilla facial
#### Video Demo: https://drive.google.com/drive/folders/19mtlNHpHzBzbBjkSCWnr2KvCj9HJHWAp
#### Description: Este proyecto primeramente se basa en el poder detectar si la persona lleva o no mascarilla facial, con ello, una alarma con la cual podemos visualizar el resultado de esta, también se utilizó flask, html y css, para hacer una pagina web donde poder visualizar al administrador de un registro del ingreso a un cierto lugar y de manera más detallada si se detectó que la persona llevaba mascarilla o no.
TODO
##face_mask_model.xml
#### Entrenamos y usamos el modelo obtenido para poder reconocer las mascarillas faciales.
##test_face_mask.py
#### Este sería nuestro codigo principal y es que corremos para que detectectar la mascarilla facial y así poder activar o desactivar la alarma.

## app.py
#### En este se implmentaron funciones de seguridad para que no cualquier usuario no pueda entrar, solamente el administrador designado. Se hicieron consultas para despues poder visualizarlas los archivos HTML.

## helpers.py
#### Se implementó una función para que no se pueda acceder a la pagina sin antes haber inicializado sesión.

## registro.sql
#### Es donde se almacenó el registro, solamente es el comando de la tabla que pertenece a la base de datos principal.

## Templates
#### Aquí tenemos los archivos HTML como el cambio de contraseña, el dashboard, el login y layout. Tambien se hizo uso de Bootstrap para darle una mejor visualización.

## Static
#### Aquí solamente tenemos los estilos que se implementaron para los archivos HTML.

