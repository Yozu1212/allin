#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int i;
	int j;
	int k = 0;
	for(i = 1;i <=10 ;i++)
	{
		printf("�п�J��%d�ӤH�����P��ƶq\n",i);
		scanf("%d",&j);
		if(k < j)
		{
			k = j;
		}
		if(i == 10)
		{
			printf("�P��ƶq�̦h���O%d",k);
			break;
		}		
	} 
	system("PAUSE");
	return 0;
}
