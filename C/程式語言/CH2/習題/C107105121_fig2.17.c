#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int u,a,t;
	printf("�п�J��l�t��\n");
	scanf("%d",&u);
	printf("�п�J�[�t��\n");
	scanf("%d",&a);
	printf("�п�J�ɶ�\n");
	scanf("%d",&t);
	printf("�̲׼ƫ׬O%d\n",u+a*t);
	printf("�Ҹg�L���Z���O%d\n",u*t+a*1/2*(t*t));

	system("PAUSE");
	return 0;
}
