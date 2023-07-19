#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 3,j = 7;
	if (!((i > 4) || (j <= 6))){
		printf("i=%d\tj=%d\n", i, j);
	}
	printf("\n");
	if (!(i > 4) && !(j <= 6)){
		printf("i=%d\tj=%d\n", i, j);
	}
	system("PAUSE");
	return 0;
}
