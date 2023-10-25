#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);

    return 0;
}

int get_cents(void)
{
    // TODO
    int n;
    do
    {
        n = get_int("Ingrese una cantidad: ");
    }
    while (n < 0 || n > 160);
    return n;
}

int calculate_quarters(int cents)
{
    // TODO
    int m = 0;
    if (cents >= 25)
    {
        m = cents / 25;
    }
    return m;
}

int calculate_dimes(int cents)
{
    // TODO
    int l = 0;
    if (cents >= 10)
    {
        l = cents / 10;
    }
    return l;
}

int calculate_nickels(int cents)
{
    // TODO
    int k = 0;
    if (cents >= 5)
    {
        k = cents / 5;
    }
    return k;
}

int calculate_pennies(int cents)
{
    // TODO
    int g = 0;
    if (cents >= 1)
    {
        g = cents / 1;
    }
    return g;
}
