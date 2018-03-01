#include <stdio.h>

int main()
{
	int a,b,ans;

	printf("aを入力してください:");
    scanf("%d",&a);
    printf("bを入力してください:");
    scanf("%d",&b);
    
	if( a == 2) {
		ans = a * b;
	}else{
		ans = a + b ;
	}
	printf(" %d %d \n " ,a,b );
    printf("----------------%d-------------- \n" ,ans);
}
