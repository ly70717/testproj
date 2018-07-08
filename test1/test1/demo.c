#include <stdio.h>
/*

int Add(int  a, int b) 
{
	return a + b;
}

double chu(double a, double b)
{
	if (b == 0)
	{
		return 0;
	}
	double c = a / b;
	
	return c ;
	
}*/

void lingxing(int x)
{
	if (x < 0 || x % 2 == 0) return;

	int i, j;
	int numeveryline = 0;
	int numblank = 0;

	int totalnum = x;
	int midnum = (totalnum + 1) / 2;

	for (i = 0; i < totalnum; i++)
	{
		if (i < midnum)
		{
			numeveryline = 2 * i + 1;
		}
		else
		{
			numeveryline = totalnum - 2 * ((i - midnum) + 1);
		}

		numblank = (totalnum - numeveryline) / 2;
		for (j = 0; j < numblank + numeveryline; ++j)
		{
			if (j < numblank)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}

int main()
{
	lingxing(9);
	getchar();
}
	
