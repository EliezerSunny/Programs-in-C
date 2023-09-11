#include <stdio.h>

int main()
{
	int n, i, j;
	n = 20;
	for (i = 0; i < n; i++)
	{
		printf("#");
		for (j = 0; j < n; j++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
