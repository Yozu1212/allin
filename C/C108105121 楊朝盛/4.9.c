#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	unsigned int counter=1;
	  
	do{
		printf("%u ",counter);
	}while(++counter<=10);
	return 0;
}
