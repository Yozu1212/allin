#include <stdio.h>
#include <stdlib.h>
#define SIZE 80
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reverse(const char * const sPtr);
int main(int argc, char *argv[]) {
	char sentence[SIZE];
	puts("Enter a line of text");
	fgets(sentence,SIZE,stdin);
	printf("\n%s","The line printed backward is:");
	reverse(sentence);
}

void reverse(const char * const sPtr)
{
		if('\0' == sPtr[0])
		{
			return;
		}
		else
		{
			reverse(&sPtr[1]);
			putchar(sPtr[0]);
		}
}

