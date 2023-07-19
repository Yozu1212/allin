#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char string1[] = "abcdefghijklmnopqrstuvwxyz";
	char string2[] = "four";
	char string3[] = "Boston";
	
	printf("%s\"%s\"%s%u\n%s\"%s\"%s%u\n%s\%s\"%s%u\n",
	"The length of ",string1," is ",strlen(string1),
	"The length of ",string2," is ",strlen(string2),
	"The length of ",string3," is ",strlen(string3));
	return 0;  
} 

