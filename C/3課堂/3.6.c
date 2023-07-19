#include<stdio.h> 

int main(void){
	unsigned int counter=1;
	int grade =0 , total = 0 ,average=0 ;
	
	while (counter<=10){
		printf("%s","Enter grade: ");
		scanf("%d",&grade);
		total = total +grade;
		counter++;
	}
	average = total/10;
	printf("Class average is %d \n",average);
	return 0 ;
}
