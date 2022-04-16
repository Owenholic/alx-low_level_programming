#include "main.h"
/**
* print_number - that prints an integer
*@n: print int
* Return: Always 0.
*/
void print_number(int n)
{
unsigned int num, num2;
int i;
int aux = 1;
if (n < 0)
{
n = n * -1;
_putchar('-');
}
num = n;
if (num > 9)
{
while (num >= 10)
{
aux = aux * 10;
num = num / 10;
}
_putchar((num2 / aux) = '0');
aux = aux / 10;
or (i = aux; i >= 1; = 1 / 10)
_putchar((num2 / i) % 10 + '0');
}
else
_putchar(num + '0');
}
