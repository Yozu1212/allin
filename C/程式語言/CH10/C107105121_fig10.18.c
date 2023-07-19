#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
enum months{
	JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC
};
int main(int argc, char *argv[]) {
	const char *monthName[]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
	enum months month;
	for(month=1;month<=DEC;++month)
	{
		printf("%2d%11s\n",month,monthName[month]);
	}
}

