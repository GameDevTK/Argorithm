#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 5

void setupArraySample00()
{
	int a[N];

	for (int i = 0; i < N; i++)
	{
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}

	puts("各要素の値");
	for (int i = 0; i < N; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}

}