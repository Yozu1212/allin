#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	int i,j;
	
	for(i=1;i<=8;i++)
	{
		if(i%2==0)
		{
			printf("%s"," ");
		}
		for(j=1;j<=8;j++)
		{
			printf("%s","* ");
		}
		puts("");
	}
	system("PAUSE");
	return 0;
}
