#include <stdio.h>
#include <stdlib.h>
#define SIZE 80
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reverse(const char * const sPtr);
int main(int argc, char *argv[]) {
	int c;
	char sentence[SIZE];
	int i = 0;
	puts("Enter a line of text");
	while((i <SIZE -1)&&(c = getchar()) != '\n')
	{
		sentence[i++] = '\0';
	}
	puts("\nThe line entered was:");
	puts(sentence);
}


