#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double amount,principal = 1000.0,rate = .05;
	unsigned int year;
	printf("%4s%21s\n", "Year", "Amount on deposit");
	for (year = 1; year <= 10; ++year)
	{
		amount = principal* pow(1.0 + rate, year);
		printf("%4u%21.0f\n", year, amount);
	}
    system("PAUSE");
	return 0;
}
