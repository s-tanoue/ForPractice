#include <stdio.h>

int main()
{
	int a, b, ans;
	//こんにちは
	printf("aを入力してください:");
	scanf("%d", &a);
	printf("bを入力してください:");
	scanf("%d", &b);

	if (a == 2)
	{
		ans = a * b;
	}
	else
	{
		ans = a + b;
		ans = ans * 10;
	}
	printf(" %d %d \n ", a, b);
	printf("----------------%d-------------- \n", ans);
	// テスト（岩瀬）
	// テスト（田上）
	// テスト（偽田上）
}
