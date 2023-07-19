#include<stdio.h>

int main(void){
int a = 0;
int b = 0;
int c = 0;
int max = 0 , min = 0 ;

printf("Enter three different integers: ");
scanf("%d %d %d",&a,&b,&c);
printf("Sum is :%d\n",a+b+c);
printf("Average is :%d\n",(a+b+c)/3);
printf("Product is :%d \n",a*b*c);
   
if (a<b&&b<c){	min = a;max = c;}
if (a<c&&c<b){	min = a;max = b;}
if (b<a&&a<c){	min = b;max = c;}
if (b<c&&c<a){	min = b;max = a;}	
if (c<a&&a<b){	min = c;max = b;}
if (c<b&&b<a){	min = b;max = a;}
	
 printf("Smallest :%d \n",min); 
 printf("Largest :%d \n",max);   
           
system("pause");
    return 0;
}
