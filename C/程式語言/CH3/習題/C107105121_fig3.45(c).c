#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int b,d;
	float a=1,i=10,j,k=1,c=1;
	
	printf("�п�J�@�ӼƦr:");
	scanf("%d",&b);
	for(j=1;j<=i;j++)
	{
		c*=b;
		k*=j;
		a+=c/k;
	}
	printf("�۵M�ƪ��Ȫ�%d����j����%.2f",b,a);
	system("PAUSE");
	return 0;
} 
