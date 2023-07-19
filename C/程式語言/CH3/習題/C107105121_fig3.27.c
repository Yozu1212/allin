#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int i;
	int j;
	int a = 0;
	int b = 0;
	
	printf("請輸入10次1或2\n");
	for(i = 1;i <= 10;i++)
	{
		start:
		printf("請輸入第%d個數字:",i);
		scanf("%d",&j);
		if(j == 1)
		{
			a++;
		}
		if(j == 2)
		{
			b++;
		}
		if(j != 1&&j != 2)
		{
			printf("請從新輸入\n");
			goto start;
		}
		if(i==10)
		{
			printf("打了%d次1\n打了%d次2\n",a,b);
			break;
		}
	}
	system("PAUSE");
	return 0;
}
