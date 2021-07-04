// 配列の要素の最大値を求める
#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


// 要素数nの配列aの要素の最大値を求める
int maxof(const int a[], int n)
{
	int i;
	int max = a[0];//最大値

	for (i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	return max;
}

int main()
{
	int i;
	int* height;	// 配列の先頭要素へのポインタ
	int number;		// 人数=配列heightの要素数

	printf("人数：");
	scanf("%d", &number);

	// 要素数numberの配列を生成
	height = (int*)calloc(number, sizeof(int));

	// 時刻から乱数の種を初期化
	srand(time(NULL));
	for (i = 0; i < number; i++)
	{
		// 100 ~ 189の乱数を生成して、代入
		height[i] = 100 + rand() % 90;
		printf("height[%d] = %d\n", i, height[i]);
	}

	printf("最大値は%dです。\n", maxof(height, number));

	// 配列heightを破棄
	free(height);

	return 0;
}

