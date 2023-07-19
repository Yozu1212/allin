#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	unsigned int count = 1;
	while(count <= 10)
	{
		puts(count % 2 ? "****":"++++++++");
		++count;
	} 
	system("PAUSE");
	return 0;
}
