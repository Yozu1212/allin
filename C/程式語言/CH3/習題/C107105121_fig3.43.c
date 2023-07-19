#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int i,j,k;
	printf("輸入三個數值判斷是否可以成為三角形的三個邊長\n");
	scanf("%d %d %d",&i,&j,&k);
	if(i+j>k&&i+k>j&&j+k>i)
	{
		printf("是\n");
	}
	else
	{
		printf("否\n");
	}
	system("PAUSE");
	return 0;
}
