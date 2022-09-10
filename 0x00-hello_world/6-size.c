#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */

int main(void)
{
printf("Size of a char: %1 byte(s)\n", sizeof(char));
printf("Size of a int: %4 byte(s)\n", sizeof(int));
printf("Size of a long long int: %8 byte(s)\n", sizeof(long long int));
printf("Size of a float: %i byte(s)\n", sizeof(float));
return (0);
}