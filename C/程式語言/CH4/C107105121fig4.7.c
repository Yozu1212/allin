#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	unsigned aCount=0;
	unsigned bCount=0;
	unsigned cCount=0;
	unsigned dCount=0;
	unsigned fCount=0;
	
	puts("Enter the letter grades.");
	puts("Enter the EOF character to end input.");
	int grade;
	
	while((grade= getchar())!=EOF) 
	{
		switch(grade)
		{
			case 'A':
			case 'a':
				++aCount;
				break;
			case 'B':
			case 'b':
				++bCount;
				break;
			case 'C':
			case 'c':
				++cCount;
				break;
			case 'D':
			case 'd':
				++dCount;
				break;
			case 'F':
			case 'f':
				++fCount;
				break;
			case '\n':
			case '\t':
				break;
			default:
				printf("%s","Incorrect letter grade entered.\n");
				puts("Enter a new grade.");
				break;
		}
	}
	
	printf("A:%u\n",aCount);
	printf("B:%u\n",cCount);
	printf("C:%u\n",dCount);
	printf("D:%u\n",fCount);
	printf("F:%u\n",aCount);
	return 0;
}
