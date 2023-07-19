#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	
	puts("enter seven integers: ");
	scanf("%d%i%i%i%o%u%x",&a,&b,&c,&d,&e,&f,&g);
	
	puts("\nthe input displayed as decimal integers is :");
	scanf("%d %d %d %d %d %d %d \n ",a,b,c,d,e,f,g);
	system("pause");
	return 0;
}
