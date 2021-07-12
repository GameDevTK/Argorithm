#include <stdio.h>

// aとbの和を求める
int sum(int a, int b)
{
	return a + b;
}

// aとbの積を求める
int mul(int a, int b)
{
	return a * b;
}

void kukuMul()
{
	int row		= 0;// 行（〇の段）
	int column	= 0;// 列
	int result	= 0;// 結果
	
	for (row = 1; row <= 9; row++)
	{
		for (column = 1; column <= 9; column++)
		{
			result = mul(row, column);
			printf("%3d", result);
		}
		printf("\n");
	}
}

void kukuSum()
{
	int row		= 0;// 行（〇の段）
	int column	= 0;// 列
	int result	= 0;// 結果
	
	for (row = 1; row <= 9; row++)
	{
		for (column = 1; column <= 9; column++)
		{
			result = sum(row, column);
			printf("%3d", result);
		}
		printf("\n");
	}
}

int main()
{
	puts("九九の加算表");
	kukuSum();

	puts("九九の乗算表");
	kukuMul();

	return 0;
}

