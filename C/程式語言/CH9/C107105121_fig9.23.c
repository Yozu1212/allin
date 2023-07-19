#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
{
	int x;
	int y;
	
	printf("%s","enter a six digit integer:");
	scanf("%2d%d",&x,&y);
	
	printf("the integers input were %d and %d\n",x,y);
	return 0;
}
