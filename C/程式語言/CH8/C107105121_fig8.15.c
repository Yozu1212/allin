#include <stdio.h>
#include <stdlib.h>
#define SIZE1 25
#define SIZE2 15
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reverse(const char * const sPtr);
int main(int argc, char *argv[]) {
	char x[] = "Happy birthday to you";
	char y[SIZE1];
	char z[SIZE2];
	printf("%s%s\n%s%s\n",
	"The string in array x is: ",x,
	"The string in array y is: ",strcpy(y,x));
	
	strncpy(z,x,SIZE2 - 1);
	z[SIZE2 - 1] = '\0';
	printf("The string in array z is: %s\n",z);
	
}

