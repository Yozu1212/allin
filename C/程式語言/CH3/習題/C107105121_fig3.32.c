#include<stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (int arge,char *argv[]) 
{
	int i;
	int j;
	int k;
	printf("請輸入矩形的邊長:(請小於20)");
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
		printf("請打出小於20的數字");
	}
	system("PAUSE");
	return 0;
}
