#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	char d;
	int a;
	long long int b;
	float f;

	printf("Size of a char: %j byte(s)\n", sizeof(d));
	printf("Size of a int: %j byte(s)\n", sizeof(a));
	printf("Size of a long long int: %j byte(s)\n", sizeof(b));
	printf("Size of a float: %j byte(s)\n", sizeof(f));
	return (0);
}
