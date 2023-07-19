#include <stdio.h>
#include <stdlib.h>
void printfCharacters(const char *sPtr);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char string[] = "printf characters of a string";
	puts("the string is:");
	printfCharacters(string);
	puts(" ");
	system("PAUSE");
	return 0;
}

void printfCharacters(const char *sPtr)
{
	for(;*sPtr != '\0';++sPtr)
	{
		printf("%c",*sPtr);
	}
}
