#include<stdio.h>

int main(void){
   unsigned int counter = 1 ,number = 0 ,largest = 0 ;
    printf("���Q�ӫD�t�Ʀr:");
    while(counter<= 10){

    scanf("%d",&number);
    if(number>largest){
    	largest = number;
	}
	counter++;
}
printf("�̤j:%d",largest);
system("pause");
  return 0;
}

