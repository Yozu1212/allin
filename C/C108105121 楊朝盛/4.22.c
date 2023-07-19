#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  
int main(int argc, char *argv[]) {
	int grade;
	int total;
	double average;
	unsigned int aCount = 0,bCount = 0,cCount = 0,dCount = 0,fCount = 0;
	puts("Enter the letter grades.");
	puts("Enter the EOF character to end input.");
	while ((grade = getchar()) != EOF) 
	{
	switch (grade) {
	case 'A':
	case'a':
	++aCount;
	total+=90;
	break;
	case 'B':
	case'b':
	++bCount;
	total+=80;
	break;
    case 'C':
	case'c':
	++cCount;
	total+=70;
	break;
	case 'D':
	case'd':
	++dCount;
	total+=60;
	break;
	case 'F':
	case'f':
	++fCount;
	total+=50;
	break;
	case'\n':
	case'\t':
	case' ':
	break;
	default:
	printf("%s", "Incorrect letter grade are:");
	puts("Enter a new grade.");
    }
	}
    average=(float)total/(aCount + bCount + cCount + dCount + fCount);
    printf("Class average is %u\n",average);
	system("PAUSE");
	return 0;
}
