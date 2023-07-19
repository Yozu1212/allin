#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const char *ptr1 = "abcdefghijklmnopqrstuvwxyz";
	const char *ptr2 = "four";
	const char *ptr3 = "Boston";
	
	printf("%s\"%s\"%s%u\n%s\"%s\"%s%u\n%s\%s\"%s%u\n",
	"The length of ",ptr1," is ",strlen(ptr1),
	"The length of ",ptr2," is ",strlen(ptr2),
	"The length of ",ptr3," is ",strlen(ptr3));
	return 0;  
} 

