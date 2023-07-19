#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const char *string1 = "The value is 3.14159";
	const char *string2 = "aehi IsTuv";
	printf("%s%s\n%s%s\n\n%s\n%s%u\n",
	"string1 = ", string1,"string2 = ", string2,
	"The length of the initial segment of string1",
	"containing only characters from string2 = ",
	strspn(string1, string2));
	system("PAUSE");
	return 0;
}
