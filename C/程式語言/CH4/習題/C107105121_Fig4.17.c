#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z;
	printf("��J�Τ�b��");
	scanf("%d",&x);
	while(x != -1){
		printf("��J�H���B��");
		scanf("%d",&y);
		printf("����H���B��%d\n",y/2);
		printf("�ثe�n����B");
		scanf("%d",&z);
		if(z <y/2){
			printf("�Τ�%d�S���W�L�H���B��\n",x);
		}
		else{
			printf("�Τ�%d�W�L�H���B��\n",x);
		}
	printf("��J�Τ�b��");
	scanf("%d",&x);
	}
	system("PAUSE");
	return 0;
}
