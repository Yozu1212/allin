#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	unsigned int x;
	
	for(x = 1;x <= 10; ++x)
	{
		if(x == 5)
		{
			continue;
		}
		printf("%u ",x);
	}
	
	printf("\nUsed continue to skip printing the value 5");
	return 0;
}
