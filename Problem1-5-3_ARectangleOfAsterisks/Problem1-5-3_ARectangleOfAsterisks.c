// Problem1-5-3_ARectangleOfAsterisks.c : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main()
{
	int n;
	scanf("%d", &n);
	if (n < 0)
	{
		printf("Invalid input");
		exit(EOF);
	}
	int m;
	scanf("%d", &m);
	if (m < 0)
	{
		printf("Invalid input");
		exit(EOF);
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			printf("*");
		}
		if (i < n - 1)
		{
			printf("\n");
		}
	}
    return 0;
}

