#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
{
	int month=0;
	int day=0;
	int year=0;
	
	printf("%s","enter a date in the form mm-dd-yyyy:");
	scanf("%d%*c%d%*c%d",&month,&day,&year);
	printf("month=%d day =%d year=%d\n\n",month,day,year);
	
		
	printf("%s","enter a date in the form mm/dd/yyyy:");
	scanf("%d%*c%d%*c%d",&month,&day,&year);
	printf("month=%d day =%d year=%d\n\n",month,day,year);
	return 0;
}
