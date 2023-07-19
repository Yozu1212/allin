#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	unsigned int row = 10;
	while(row >= 1)
	{
		unsigned int column = 1;
		
		while(column <= 10)
		{
			printf("%s",row % 2 ? "<":">");
			++column; 
		}
	} 
	system("PAUSE");
	return 0;
}
