#include<stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (int arge,char *argv[]) 
{
	int i;
	int j;
	int k;
	printf("�п�J�x�Ϊ����:(�Фp��20)");
	scanf("%d",&i);
	if(i <= 20)
	{
	for(j = 1;j <= i;j++)
	{
		for(k = 1;k <= i;k++)
		{
			printf("*");
		}
	printf("\n");
	}
	}
	else
	{
		printf("�Х��X�p��20���Ʀr");
	}
	system("PAUSE");
	return 0;
}
