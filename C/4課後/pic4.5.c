#include <stdio.h>
int main(void){
	unsigned int sum=0 ,number =2;	
	for( number =2; number<=10 ; number+=2){ 
	sum+=number;}
	printf("Sum is %u\n",sum);
	 return 0;
}
