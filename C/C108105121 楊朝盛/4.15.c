#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  
int main(int argc, char *argv[]) {
	double amount,principal = 1000,rate = 0.05;
	unsigned int x,year;
	for(rate = 0.05;rate <= 0.1;rate += 0.01)
	{
	printf("%.2f\n",rate);
	for(year = 1;year <= 10;year++)
	{
	amount = principal * pow(1.0 + rate,year);
	printf("%d\t%.2f\n",year,amount);
    }
    //puts("");
}
	system("PAUSE");
	return 0;
}
