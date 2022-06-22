#include <stdio.h>
#include <stdlib.h>

/**
 * main - main code
 * @argc: amount of arguments passed at execution
 * @argv: list of arguments
 *
 * return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	float ans =0;

	if(argc < 2)
		exit(98);
	printf("we have %d arguments\n", argc);

	for (i=1; argv[i]; i++)
	{
		j = atoi(argv[i]);
		ans += j;
	}
	printf("sum of supplied inputs: %.2f\n", ans);
	return(0);
}
