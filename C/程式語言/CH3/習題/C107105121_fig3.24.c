#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int i;
	
	printf("N\tN^2\tN^3\tN^4\n");
	for(i=1;i<=10;i++)
	{
		printf("%d\t%d\t%d\t%d\n",i,i*i,i*i*i,i*i*i*i);
		
	}
	system("PAUSE");
	return 0;
}
