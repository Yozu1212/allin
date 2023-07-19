#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int star(x);

int main(){
	int side1=0,side2=0;
	
    printf("請輸入長和寬:");
    
    scanf("%d %d",&side1,&side2); 
    
for(int j =1; j<=side1;j++){

for(int i=1;i<=side2;i++){
	star();
	}
 	 printf("\n");
}
return 0 ;
}


int star(x){
	 printf("@");
}
