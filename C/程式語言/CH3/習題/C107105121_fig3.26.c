#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	unsigned int counter;
	int number=0;
	int largest=0;
	int largest2=0;
	
	for(counter = 1;counter <= 10;counter++){
		printf("%s","輸入數值:");
		scanf_s("%d",&number);
		if(number>largest)
		{
			largest=largest2;
			largest=number;
		}
		else if(number>largest2){
			largest2=number;
		}
	}
	printf("最大值 : %d 第二大值 : %d \n",largest ,largest2);
	system("PAUSE");
	return 0;
}
