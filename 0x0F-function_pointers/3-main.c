3-main.c.txt
Who has access
A
System properties
Type
Text
Size
532 bytes
Storage used
1 KB
Location
0x0F-function_pointers
Owner
Antony Bahati
Modified
9:53 PM by Antony Bahati
Opened
10:25 PM by me
Created
1:45 PM
No description
Viewers can download

#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = f(a, b);
	printf("%d\n", c);
	return (0);
}
