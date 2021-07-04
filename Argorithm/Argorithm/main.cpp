// 2分探索(binary search)
// 要素がキーの昇順または降順にソート（整列）されている
// 配列から効率よく探索を行うアルゴリズム
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 要素数nの配列aからkeyと一致する要素を２分探索
int BinarySearch(const int a[], int n, int key)
{
	int pl = 0;		// 探索範囲先頭の添字
	int pr = n - 1;	// 探索範囲末尾の添字
	int pc;			// 探索範囲中央の添字

	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key)
			return pc;
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);

	return -1;
}

int main()
{
	int i, nx, ky, idx;
	int* x;

	puts("２分探索");
	printf("要素数：");
	scanf("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));// 要素数nxのint型配列を生成

	printf("昇順に入力してください。\n");
	printf("x[0]：");
	scanf("%d", &x[0]);

	for (i = 1; i < nx; i++)
	{
		do {
			printf("x[%d]：", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);// 一つ前の値よりも小さければ再入力
	}
	
	printf("探す値：");
	scanf("%d", &ky);
	idx = BinarySearch(x, nx, ky);

	if (idx == -1)
		puts("探索に失敗しました。");
	else
		printf("%dはx[%d]にあります。\n", ky, idx);

	// 配列を破棄
	free(x);

	return 0;
}

