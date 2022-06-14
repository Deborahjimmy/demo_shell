#include <stdio.h>
#include <unistd.h>

/**
 * main -prints the environment
 *
 * return: Always 0
 * */
int main(void)
{
	unsigned int i;
	extern char **environ;

	i=0;
	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
