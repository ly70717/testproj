#include <stdio.h>

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
	
}

int main()
{
	int ret;
	int c;
	ret = Add(10, 5);
	printf("%d", ret);

	/*
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
	*/
	getchar();
}