#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
{
	int c=1427;
	printf("%#o\n",c);
	printf("%#x\n",c);
	printf("%#X\n",c);
	
	double p=1427.0;
	printf("\n%g\n",p);
	printf("%#g\n",p);
	system("pause");
	return 0;
}
