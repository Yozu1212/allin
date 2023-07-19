#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int b,d;
	float a=1,i=10,j,k=1,c=1;
	
	printf("請輸入一個數字:");
	scanf("%d",&b);
	for(j=1;j<=i;j++)
	{
		c*=b;
		k*=j;
		a+=c/k;
	}
	printf("自然數的值的%d次方大約為%.2f",b,a);
	system("PAUSE");
	return 0;
} 
