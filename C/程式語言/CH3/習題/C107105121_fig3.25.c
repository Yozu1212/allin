#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int i;
	printf("A\tA+3\tA+6\tA+9\n");
	for(i = 1;i<=5;i++)
	{
		printf("%d\t%d\t%d\t%d\n",i * 7,i * +3,i * +6,i * +9);
	}
	system("PAUSE");
	return 0;
}
