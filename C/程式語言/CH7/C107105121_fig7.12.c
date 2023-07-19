#include <stdio.h>
#include <stdlib.h>
void f(const int *xPtr);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const char *string = "51.2% are admitted";
	char *stringPtr;
	double d = strtod(string,&stringPtr);
	printf("the string \"%s\" is converted to then\n",string);
	printf("double vaule %.2f and the string \"%s\" \n",d,stringPtr);
	system("PAUSE");
	return 0;
}


