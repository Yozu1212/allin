#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
{
	puts("using precision for integers");
	int i=873;
	printf("\t%.4d\n\t%.9d\n\n",i,i);
	
	puts("using precision for floating-point6 numbers");
	double f=123.94536;
	printf("\t%.3f\n\t%.3e\n\t%.3g\n\n",f,f,f);
	
	puts("using precision for strings");
	char s[]="happy birthday";
	printf("\t%.11s\n",s);
	system("pause");
	return 0;
}
