#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int grade = 0,A = 1, a = 1, B = 1, b = 1, C = 1, c = 1, D = 1, d = 1, F = 1, f = 1;
	unsigned int aCount = 0,bCount = 0,cCount = 0,dCount = 0,fCount = 0;
	puts("Enter the letter grades.");
	puts("Enter the EOF character to end input.");
	scanf("%d", &grade);
	while ((grade = getchar()) != EOF){
		if (grade == 'A' || grade == 'a' || grade != '\n'){
			aCount+=1;
		}
		else if (grade == 'B ' || grade == 'b' || grade != '\n'){
			bCount += 1;
		}
		else if (grade == 'C' || grade == 'c' || grade != '\n'){
			cCount += 1;
		}
		else if (grade == 'D' || grade == 'd' || grade != '\n'){
			dCount += 1;
		}
		else if (grade == 'F' || grade == 'f' || grade != '\n'){
			fCount += 1;
		}
		else{
			printf("%s", "Incorrect letter grade are:");
			puts("Enter a new grade.");
		}
	}
	puts("\nTotals for each letter grade are:");
	printf("A: %u\n", aCount);
	printf("B: %u\n", bCount);
	printf("C: %u\n", cCount);
	printf("D: %u\n", dCount);
	printf("F: %u\n", fCount);	
	system("PAUSE");
	return 0;
}
