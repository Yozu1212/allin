#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int i;
	int j;
	int a = 0;
	int b = 0;
	
	printf("�п�J10��1��2\n");
	for(i = 1;i <= 10;i++)
	{
		start:
		printf("�п�J��%d�ӼƦr:",i);
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
			printf("�бq�s��J\n");
			goto start;
		}
		if(i==10)
		{
			printf("���F%d��1\n���F%d��2\n",a,b);
			break;
		}
	}
	system("PAUSE");
	return 0;
}
