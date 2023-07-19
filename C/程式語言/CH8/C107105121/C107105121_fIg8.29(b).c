#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *ptr1 = "Happy New Year";
	char *ptr2= "Happy New Year";
    char *ptr3 = "Happy Holidays";
	
	printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
	"s1 = ", ptr1 ,"s2 = ", ptr2 ,"s3 = ", ptr3 ,
	"strcmp(s1 , s2) = ",strcmp( ptr1, ptr2),
	"strcmp(s1 , s3) = ",strcmp( ptr1, ptr3),
	"strcmp(s3 , s1) = ",strcmp( ptr3, ptr1));
	
	printf("%s%2d\n%s%2d\n%s%2d\n",
	"strncmp(s1 , s3, 6) = ",strncmp( ptr1, ptr3, 6),
	"strncmp(s1 , s3, 7) = ",strncmp( ptr1, ptr3, 7),
	"strncmp(s3 , s1, 7) = ",strncmp( ptr3, ptr1, 7));
	return 0;  
} 

