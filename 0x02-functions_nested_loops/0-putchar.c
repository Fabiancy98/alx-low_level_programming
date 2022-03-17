#include "main.h"

/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char school[10] = "_putchar";
int i;

for (i = 0; i < 8; i++)
{
_putchar(school[i]);
}
_putchar(10);
_putchar('\n');

return (0);
}
