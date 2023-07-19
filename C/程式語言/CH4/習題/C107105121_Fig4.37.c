#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	unsigned int x;
	for (x = 1; x <= 10; ++x){
		if (x > 5||x < 5){
			printf("%u ", x);
		}
	}
	puts("\nUsed continue to skip printing the value x = 5");
	system("PAUSE");
	return 0;
}
