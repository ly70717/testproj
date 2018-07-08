#include <stdio.h>

int main()
{
	int i,j;
	int numeveryline = 0;
	int numblank = 0;

	for (i = 0; i < 9; i++)
	{
		if (i < 5 )
		{
			numeveryline = 2 * i + 1;
		}
		else
		{
			numeveryline = 17 - 2 * i;
		}
		
		numblank = (9 - numeveryline) / 2;
		for (j = 0;j < numblank + numeveryline; ++j)
		{
			if(j < numblank)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	getchar();
}