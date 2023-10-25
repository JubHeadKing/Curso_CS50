# TODO
from cs50 import get_float


def main():

    dollars = get_cents()

    cents = int((dollars * 100) + 0.5)
    total = 0
    for coin in [25, 10, 5, 1]:
        total += cents // coin
        cents %= coin
    print(total)


def get_cents():
    while True:
        n = get_float('Ingrese una cantidad: ')
        if n >= 0:
            break
    return n


if __name__ == "__main__":
    main()

