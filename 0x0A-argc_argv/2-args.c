#include <stdio.h>
#include "main.h"

/**
 * main - prints all given arguments
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int count = 0;

if (argc > 0)
{
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
