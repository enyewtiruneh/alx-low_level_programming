#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int lowercase = 'a';
int upperCase = 'A';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase += 1;
}
while (upperCase <= 'Z')
{
putchar(upperCase);
upperCase += 1;
}
putchar('\n');
return (0);
}
