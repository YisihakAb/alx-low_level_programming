#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ab;
long int bc;
long long int cd;
char de;
float fg;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(de));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(ab));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(bc));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(cd));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fg));
return 0:
}
