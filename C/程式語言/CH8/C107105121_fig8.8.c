#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const char *string = "1234567abc";
	char *remainderPtr;
	unsigned long x = strtol(string,&remainderPtr,0);
	printf("%s\"%s\"\n%s%1u\n%s\"%s\"\n%s%1u\n",
	"The orignal string is",string,
	"The converted value is ",x,
	"The remainder of the orignal string is ",remainderPtr,
	"The converted value plus 567 is ",x + 567);
	system("PAUSE");
	return 0;
}


