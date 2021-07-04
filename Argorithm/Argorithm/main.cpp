// 線形探索
// 要素が直線状に並んだ配列からの探索は、
// 目的とするキー値をもつ要素に出会うまで先頭から順に要素を走査する
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 要素数nの配列aからkeyと一致する要素を線形探索
int search(const int a[], int n, int key)
{
	int i = 0;
	while (1) {
		if (i == n)
			return -1;	// 探索失敗
		if (a[i] == key)
			return i;	// 探索成功
		i++;
	}
}

int main()
{
	int i, nx, ky, idx;
	int* x;	// 配列の先頭要素へのポインタ

	puts("線形探索");
	printf("要素数：");
	scanf("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));	// 要素数nxのint型配列を生成

	for (i = 0; i < nx; i++) {
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}

	printf("探す値：");
	scanf("%d", &ky);

	// 配列xから値がkyである要素を線形探索
	idx = search(x, nx, ky);

	if (idx == -1)
		puts("探索に失敗しました。");
	else
		printf("%dはx[%d]にあります。\n", ky, idx);

	// 配列を破棄
	free(x);

	return 0;
}

