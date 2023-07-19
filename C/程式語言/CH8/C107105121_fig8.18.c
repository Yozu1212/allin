#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reverse(const char * const sPtr);
int main(int argc, char *argv[]) {
	const char *s1 = "Happy New Year";
	const char *s2 = "Happy New Year";
	const char *s3 = "Happy Holidays";
	printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
	"s1 = ",s1,"s2 = ",s2,"s3 = ",s3,
	"strcmp(s1,s2) = ",strcmp(s1,s2),
	"strcmp(s1,s3) = ",strcmp(s1,s3),
	"strcmp(s3,s1) = ",strcmp(s3,s1));
	printf("%s%2d\n%s%2d\n%s%2d\n",
	"strncmp(s1,s3,6) = ",strncmp(s1,s3,6),
	"strncmp(s1,s3,7) = ",strncmp(s1,s3,7),
	"strncmp(s3,s1,7) = ",strncmp(s3,s1,7));
}

