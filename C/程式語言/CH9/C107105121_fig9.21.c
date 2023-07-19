#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
{
	char z[9];
	
	printf("%s","enter a string");
	scanf("%8[aeiou]",z);
	
	printf("the input was \"%s\"\n",z);
	system("pause");
	return 0;
}
