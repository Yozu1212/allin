#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const char *string1 = "This is a test";
	const char *string2 = "beware";
	printf("%s\"%s\"\n'%c'%s\n\"%s\"\n",
	"Of the characters in ",string2,
	*strpbrk(string1,string2),
	"appears earliest in ",string1);
	system("PAUSE");
	return 0;
}

