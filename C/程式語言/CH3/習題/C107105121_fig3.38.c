#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int i,j,k;
	k=0;
	printf("�п�J�@�ӼƦr:");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		if(j%9==0)
		{
			printf("%d\n",j);
			k++;
		}
	}
	printf("�@%d��9�����",k);
	system("PAUSE");
	return 0;
}
