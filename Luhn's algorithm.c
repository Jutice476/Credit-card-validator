#include <cs50.h>
#include <stdio.h>

int luhn(int q, long n);
int digits(long n);

int main(void)
{
    long number = get_long("Number: ");
    int number_digits = 0;
    digits(number);
    if (luhn(number_digits, number) == 1)
    {
        if ((number > 339999999999999 && number < 350000000000000) ||
            (number > 369999999999999 && number < 380000000000000))
        {
            printf("AMEX\n");
        }
        else if (number > 5099999999999999 && number < 5600000000000000)
        {
            printf("MASTERCARD\n");
        }
        else if ((number > 3999999999999 && number < 5000000000000) ||
                 (number > 3999999999999999 && number < 5000000000000000))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

int digits(long n)
{
    int number_digits = 0;
    do
    {
        n = n / 10;
        number_digits++;
    }
    while (n > 0);
    return number_digits;
}

int luhn(int q, long n)
{
    int l = 0;
    int s = 0;
    while (n > 0)
    {
        l = l + n % 10;
        n = n / 10;
        int w = (n % 10) * 2;
        if (w > 9)
        {
            int w1 = w / 10;
            w = w % 10 + w1 % 10;
        }
        s = s + w;
        n = n / 10;
    }
    int checksum = l + s;
    if (checksum % 10 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}