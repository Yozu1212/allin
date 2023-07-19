#include <stdio.h>
#include <math.h>
int main() {
	unsigned int year=1;
	double principal=1000.0;
	double rate=0.05;
	printf("%4s%21s\n","Years","Amount on deposit");
	for( year=1; year<=10 ;++year){
		double amount=principal*pow(1.0+rate,year);
		printf("%4u%21.2f\n",year,amount);
	}
	 return 0;
	}
