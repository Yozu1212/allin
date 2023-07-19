#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const char *string1 = "The value is 3.14159";
	const char *string2 = "1234567890";
	printf("%s%s\n%s%s\n\n%s\n%s%u\n",
	"string1 =",string1,"string2 =",string2,
	"The length of the initial segment of string1",
	"containting no characters from string2 = ",
	strcspn(string1,string2));
	system("PAUSE");
	return 0;
}


