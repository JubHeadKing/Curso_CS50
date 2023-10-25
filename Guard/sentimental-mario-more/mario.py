# TODO
from cs50 import get_int

x = 0
while x < 1 or x > 8:
    x = get_int('ingrese la altura: ', )
l = x
x = 1
for k in range(l):
    if l > 0:
        o = l - 1
        for s in range(o):
            print(' ', end='')

    for i in range(x):
        print('#', end='')

    for j in range(1):
        print('  ', end='')

    for p in range(x):
        print('#', end='')

    x += 1
    l -= 1
    print()