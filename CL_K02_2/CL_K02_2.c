#include <stdio.h>
/* �쐬�ҁF1T1(11) ���쌴���� */
/* �ۑ薼�F�ۑ�02_2 */
void main(void) {
	int a,b;
	printf("a�̒l����͂��Ă������� : ");
	scanf("%d",&a);
	printf("b�̒l����͂��Ă������� : ");
	scanf("%d",&b);
	if (b != 0){
		printf("%d��%d�Ŋ��������ʂ�%d�ł�\n",a,b,a/b);
		printf("%d��%d�Ŋ������]���%d�ł�\n",a,b,a%b);
	} else {
		printf("�G���[ : �O�Ŋ��邱�Ƃ͂ł��܂���");
	}
	1
	2
}