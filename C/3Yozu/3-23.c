#include<stdio.h>

int main(void){
   unsigned int counter = 1 ,number = 0 ,largest = 0 ;
    printf("打十個非負數字:");
    while(counter<= 10){

    scanf("%d",&number);
    if(number>largest){
    	largest = number;
	}
	counter++;
}
printf("最大:%d",largest);
system("pause");
  return 0;
}

