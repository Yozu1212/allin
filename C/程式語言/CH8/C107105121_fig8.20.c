#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const char *string = "This is a test";
	char character1 = 'a';
	char character2 = 'z';
	if(strchr(string,character1) != NULL)
	{
		printf("\'%c\' was found in \"%s\".\n",
		character1,string); 
	}
	else
	{
		printf("\'%c' was not found in \"%s\".\n",
		character1,string); 
	}
	if(strchr(string,character2) != NULL)
	{
		printf("\'%c' was found in \"%s\".\n",
		character2,string); 
	}
	else
	{
		printf("\'%c' was not found in \"%s\".\n",
		character2,string); 
	}
	system("PAUSE");
	return 0;
}


