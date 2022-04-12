
#include <stdio.h>
/**
 *main - program that prints the alphabet in lowercase, followed by a new line
 *You can only use the putchar
 *Return: Always 0 (Success/correct)
 */
int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}

putchar('\n');

return (0);
}
