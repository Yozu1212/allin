#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
    double principal = 1000.0;
    double rate = .05;
    unsigned int year=1;
    double amount = 0;
	
    for(year= 1;year<=10;++year)
    {
    	double amount = principal *pow (1.0 + rate,year);
    	printf("%4u%21.2f\n",year,amount);
	}
	return 0;
}
