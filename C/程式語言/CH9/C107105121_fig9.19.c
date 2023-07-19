#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
{
	double a;
	double b;
	double c;
	
	puts("enter three floating-point numbers:");
	scanf("%1e%1f%1g",&a,&b,&c);
	
	printf("\nhere are the numbers entered in plain");
	puts("floating-point notation:");
	printf("%f\n%f\n%f\n",a,b,c);
	system("pause");
	return 0;
}
