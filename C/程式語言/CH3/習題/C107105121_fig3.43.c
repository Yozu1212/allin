#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int i,j,k;
	printf("��J�T�ӼƭȧP�_�O�_�i�H�����T���Ϊ��T�����\n");
	scanf("%d %d %d",&i,&j,&k);
	if(i+j>k&&i+k>j&&j+k>i)
	{
		printf("�O\n");
	}
	else
	{
		printf("�_\n");
	}
	system("PAUSE");
	return 0;
}
