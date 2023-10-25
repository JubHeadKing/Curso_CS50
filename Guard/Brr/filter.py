
from PIL import Image, ImageFilter

imagen = imagen.open("a.jpg")

blur_imagen = imagen.Filter(ImagenFilter.BoxBlur(5))