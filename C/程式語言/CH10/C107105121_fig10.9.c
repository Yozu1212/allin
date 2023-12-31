#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void displayBits(unsigned int value);
int main(int argc, char *argv[]) {
		unsigned int number1 = 1;
		unsigned int mask = 1;
		puts("The result of combining the following");
		displayBits(number1);
		displayBits(mask);
		puts("using the bitwise AND operator & is");
		displayBits(number1 & mask);
		
		number1 = 15;
		unsigned int setBits = 241;
		puts("\nThe result of combining the following");
		displayBits(number1);
		displayBits(setBits);
		puts("using the bitwise inclusive OR operator | is");
		displayBits(number1 | setBits);
		
		number1 = 139;
		unsigned int number2 = 199;
		puts("\nThe result of combining the following");
		displayBits(number1);
		displayBits(number2);
		puts("using the bitwise exclusive OR operator ^ is");
		displayBits(number1 ^ number2);
		
		number1 = 21845;
		puts("The one's complement of:");
		displayBits(number1);
		put("is");
		displayBits(~number1);
}

void displayBits(unsigned int value){
	unsigned int displayMask = 1 << 31;
	printf("%10u = ",value);
	unsigned int c = 1;
	for(c = 1;c <= 32;++c){
		putchar(value & displayMask ? '1':'0');
		value <<= 1;
		if(c % 8 == 0){
			putchar(' ');
		}
		}
	putchar('\n');
}
