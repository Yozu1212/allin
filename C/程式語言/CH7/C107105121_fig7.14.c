#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x = 5;
	int y;
	const int * const ptr = &x;
	printf("%d\n",*ptr);
	*ptr = 7;
	ptr = &y; 
	system("PAUSE");
	return 0;
}
