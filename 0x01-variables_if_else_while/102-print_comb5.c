#include <stdio.h>

/**
 *main - Print possible combinations of two 2-digit numbers
 * Return: Always 0
 */

int main(void)
{
int x, p;

for (x = 0; x < 100; x++)
{
for (p = 0; p < 100; p++)
{
if (x < p)
{
putchar((x / 10) + 48);
putchar((x % 10) + 48);
putchar(' ');
putchar((p / 10) + 48);
putchar((p % 10) + 48);
if (x != 98 || p != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

