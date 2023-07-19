#include<stdio.h> 

int main(void){
	unsigned int passes =0 , failures =0,student=1;
	int result = 0;
	
	while(student <= 10){
		printf("Enter Result (1=pass,2=fail):");
		scanf("%d",&result);
	if(result==1){
		passes ++;
	}
	else{
		failures++;
	}
	student ++;
}
printf("Passed %u\n",passes);
printf("Failed %u\n",failures);

if(passes>8){
	puts("Bouns to instructor!");

}
return 0 ;
}
