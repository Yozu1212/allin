#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void displayBits(unsigned int value);
int main(int argc, char *argv[]) {
	unsigned int x;
	printf("%s","Enter a nonnegative int: ");
	scanf("%u",&x);
	dislayBits(x);
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
