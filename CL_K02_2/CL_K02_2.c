#include <stdio.h>
/* 作成者：1T1(11) 小野原健太 */
/* 課題名：課題02_2 */
void main(void) {
	int a,b;
	printf("aの値を入力してください : ");
	scanf("%d",&a);
	printf("bの値を入力してください : ");
	scanf("%d",&b);
	if (b != 0){
		printf("%dを%dで割った結果は%dです\n",a,b,a/b);
		printf("%dを%dで割った余りは%dです\n",a,b,a%b);
	} else {
		printf("エラー : ０で割ることはできません");
	}
	1
	2
}