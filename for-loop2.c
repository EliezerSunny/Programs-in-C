#include <stdio.h>                                                                            int main(void)                                     {                                                      int n, i, j;
	do 
	{
		printf("Enter size: ");
		scanf("%d", &n);
	} while (n < 1);

		for (i = 0; i < n; i++)                        {
                printf("#");                                   for (j = 0; j < n; j++)                        {                                                      printf("#");                           }                                              printf("\n");                          	  }                                              return 0;                      }
