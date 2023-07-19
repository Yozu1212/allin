#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int i;
	int j;
	int k = 0;
	for(i = 1;i <=10 ;i++)
	{
		printf("請輸入第%d個人員的銷售數量\n",i);
		scanf("%d",&j);
		if(k < j)
		{
			k = j;
		}
		if(i == 10)
		{
			printf("銷售數量最多的是%d",k);
			break;
		}		
	} 
	system("PAUSE");
	return 0;
}
