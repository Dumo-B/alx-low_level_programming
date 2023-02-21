#include<stdio.h>

/**
* main - Program prints the size of various data typesi.
*
* Return: 0 is Success
*/
int main(void)
{
	printf("long int size: %d byte(s)\n", sizeof(long int));
	printf("char size: %d byte(s)\n", sizeof(char));
	printf("long long size int: %d byte(s)\n", sizeof(long long int));
	printf("int size: %d byte(s)\n", sizeof(int));
	printf("float size: %d byte(s)\n", sizeof(float));
	return (0);
}

