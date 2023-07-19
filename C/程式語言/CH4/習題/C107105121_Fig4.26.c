#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	double i=4,j,k;
	
	
	for(j=3;j<=10000;j+=4)
	{
		i-=4/j;
		i+=4/(j+2);
	}
	printf("%f",i);
	system("PAUSE");
	return 0;
}
