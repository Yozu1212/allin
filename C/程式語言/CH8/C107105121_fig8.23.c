#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const char *string1 = "A zoo has many animals including zebras";
	int c = 'z';
	printf("%s\n%s'%c'%s\"%s\"\n",
	"The remainder of string1 begining with the",
	"last occurrence of character ",c,
	" is: ",strrchr(string1,c));
	system("PAUSE");
	return 0;
}

