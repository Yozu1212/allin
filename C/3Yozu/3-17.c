#include<stdio.h>

int main(void){
    int a = 0 ,m = 0 ,d = 0 ;
    float p = 0;
    printf("Enter total collected(-1 to quit):");
    scanf("%d",&a);
    
    while(a != -1){
           
printf("Enter mortgage amount(in dollars):");
         scanf("%d",&m);
         printf("Enter mortgage term(in years):");
         scanf("%d",&d);
          printf("Enter interest rate (as a decimal):");
         scanf("%f",&p);
 printf("The monthly payable interest $ %.0f\n",((m*d*p)+m)/(d*12));
 
     printf("\nEnter total collected(-1 to quit):");
    scanf("%d",&a);
        
}
    return 0;
}
