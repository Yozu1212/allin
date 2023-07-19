#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int i,j,k;
	k=0;
	printf("請輸入一個數字:");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		if(j%9==0)
		{
			printf("%d\n",j);
			k++;
		}
	}
	printf("共%d個9的整數",k);
	system("PAUSE");
	return 0;
}
