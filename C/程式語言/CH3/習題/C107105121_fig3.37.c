#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	printf("$");
	for(i = 1;i < 500;i++)
	{
		if(i%50 == 0){
			printf("\n");
		}
		printf("$");
	}
	system("PAUSE");
	return 0;
}
