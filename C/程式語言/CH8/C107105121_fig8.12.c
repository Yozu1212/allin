#include <stdio.h>
#include <stdlib.h>
#define SIZE 80
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reverse(const char * const sPtr);
int main(int argc, char *argv[]) {
	int x;
	double y;
	puts("Enter an integger and a double:");
	scanf("%d&1f",&x,&y);
	char s[SIZE];
	sprintf(s,"integger:%6d\ndouble:%7.2f",x,y);
	printf("%s\n%s\n","The formatted output stored in array s is:",s);
}

