#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,e,f,g;
	printf("�п�J�N�X(1�g�z 2���~�u 3��Ī� 4�s�u):");
	scanf("%d",&a);
	while(a != -1){
		switch(a){
			case 1:
			printf("�g�z\n");
			printf("��g�~250\n");
			break;
			case 2:
			printf("���~�u\n");
			printf("�п�J��P�u��:");
			scanf("%d",&b);
			if(b >= 40){
				c =40*140+(b-40)*140*1.5;
				printf("%.2f\n",c);
			}
			else{
				c =b*140;
				printf("%.2f\n",c);
			}
			break;
			case 3:
			printf("��Ī�\n");
			printf("�п�J��P�P���B:");
			scanf("%d",&d);
			e=250+d*0.057;
			printf("%d\n",e); 
			break;
			case 4:
			printf("�s�u\n");
			printf("�п�J��P�s�@�`���:");
			scanf("%d",&f);
			g = f * 10;
			printf("%d\n",g);
			break;
			default:
			printf("���~�N�X\n");
			break;
			}
	printf("�п�J�N�X(1�g�z 2���~�u 3��Ī� 4�s�u):");
	scanf("%d",&a);
	}
	system("PAUSE");
	return 0;
}
