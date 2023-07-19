#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x = 6;
	int y = 6;
	if (!(x < 5) && !(y >= 7)){
		printf("x=%d\ty=%d\n", x, y);
	}
	printf("\n");
	if (!((x<5)||(y>=7))){
		printf("x=%d\ty=%d\n", x, y);
	}
    system("PAUSE");
	return 0;
}
