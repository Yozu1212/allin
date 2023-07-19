#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,g = 4;
	if (!(a == b)||(g !=5)){
		printf("x=%d\ty=%d\n", a, g);
	}
	printf("\n");
	if (!((a == b) && !(g != 5))){
		printf("x=%d\ty=%d\n", a, g);
	}
	system("PAUSE");
	return 0;
}
