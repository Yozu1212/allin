#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,a,b,c,d,e;
	while(i != -1){
		printf("��J�ƭ�(����1��30����):\n");
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
		if(a <= 30&&b <= 30&&b <= 30&&c <= 30&&d <= 30&&e <= 30){
			for(i = 1;i <= a;i++){
				printf("*");
			}
			puts(" ");
			for(i = 1;i <= b;i++){
				printf("*");
			}
			puts(" ");
			for(i = 1;i <= c;i++){
				printf("*");
			}
			puts(" ");
			for(i = 1;i <= d;i++){
				printf("*");
			}
			puts(" ");
			for(i = 1;i <= e;i++){
				printf("*");
			}
			puts(" ");
		}
		else{
			printf("�W�L�d��");
		}
	}
	system("PAUSE");
	return 0;
}
