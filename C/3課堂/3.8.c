#include<stdio.h> 

int main(void){
	unsigned int counter=0;
	int grade =0 , total = 0  ;
	float average=1.0;
	
		printf("%s","Enter grade, -1 to end: ");
			scanf("%d",&grade);
			
	while (grade != -1){
		total = total +grade;
		counter++;
			printf("%s","Enter grade, -1 to end: ");
					scanf("%d",&grade);
	}
	
	if(counter != 0){
		
		average = (float)total/counter;
		printf("Class average is %.2f \n",average);
	}
	else{
		puts("No grades were enterd");
	}
return 0 ;
}
