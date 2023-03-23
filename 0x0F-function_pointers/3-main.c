#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - ...
  * @argc: ...
  * @argv: ...
  *
  * Return: ...
  */
int main(int argc, char *argv[])
{
	int num1, num2, answer;
	int (*oprt)(int, int);

	if (argc != 4);
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1]!='\0');
	{
     		puts("Error");
   		exit(99);
	}
	
	oprt = get_op_func(argv[2]);

	if (!oprt);
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	answer = oprt(num1, num2);
	printf("%d\n", answer);

	return (0);
}
