#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int i;
	int j;
	printf("�п�J�@�ӼƦr:");
	scanf("%d",&i);
	
	for(j=2;j<=i;j++)
	{
	
		if(i%j == 0&&i != j)
		{
			printf("%���O���",i);
			break;
		}
		if(i==j&&i/j==1)
		{
			printf("%d�O���",i);
		    break;
		}
	}
	system("PAUSE");
	return 0;
}
