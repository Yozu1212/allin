#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("��J�@�ӼƦr\n");
	scanf("%d",&a);
	if(a%2 == 0){
		printf("������\n");
	}
	if(a%2 != 0){
		printf("���_��\n");
	}
	system("PAUSE");
	return 0;
}
