#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int i;
	int j;
	printf("請輸入一個數字:");
	scanf("%d",&i);
	
	for(j=2;j<=i;j++)
	{
	
		if(i%j == 0&&i != j)
		{
			printf("%不是質數",i);
			break;
		}
		if(i==j&&i/j==1)
		{
			printf("%d是質數",i);
		    break;
		}
	}
	system("PAUSE");
	return 0;
}
