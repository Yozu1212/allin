#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float i ;
	float j ;
	float a ;
	float b ;
	float k ;
	while(i != -1)
	{
	printf("��J�`�禬(��J-1�Y����):");
	scanf("%f",&i);
	if(i == -1)
	{    
		break;
	}
	printf("��J���:");
	scanf("%f",&j);
	printf("�`�禬�O:%.2f\n",i);
	a = i * 0.04;
	b = i * 0.05;
	printf("�����|���᪺�`�B�O:%.2f\n",i-a-b);
	printf("�{�|���O%.2f\n",a);
	printf("�p�|���O%.2f\n",b);
	printf("�������|���`�B%.2f\n",a+b);
	}
	system("PAUSE");
	return 0;
}
