#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,i,j,k;
	printf("��J1�Ӧ۵M��(1��100�H��)");
	scanf("%d",&x);
	for(y = 1;y <=x;y++){
		i += y;
	} 
	for(y = 1;y <=x;y++){
		j = y*y;
	}
	for(y = 1;y <=x;y++){
		k = y*y*y;
	}
	printf("�`�M=%d\n",i);
	printf("����M=%d\n",j);
	printf("�ߤ�M=%d\n",k);
	system("PAUSE");
	return 0;
}
