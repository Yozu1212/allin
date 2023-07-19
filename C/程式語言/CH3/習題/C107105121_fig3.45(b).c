#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	
	float a=1,i=10,j,k=1;
	for(j=1;j<=i;j++)
	{
		k*=j;
		a+=1/k;	
	}
	printf("自然數的值大約為%.2f",a);
	system("PAUSE");
	return 0;
} 
