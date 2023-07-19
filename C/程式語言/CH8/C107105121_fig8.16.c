#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reverse(const char * const sPtr);
int main(int argc, char *argv[]) {
	char s1[20] = "Happy ";
	char s2[] = "New Year ";
	char s3[40] = "";
	printf("s1 = %s\ns2 = %s\n", s1, s2);
	printf("strcat(s1, s2) = %s\n",strcat(s1, s2));
	printf("strncat(s3, s1, 6) = %s\n",strncat(s3, s1, 6));
	printf("strcat(s3, s1) = %s\n",strcat(s3, s1));
}

