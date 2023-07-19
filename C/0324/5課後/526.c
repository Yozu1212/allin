#include<stdio.h>

int isPerfect(j,sum);
int main(){

	int sum = 0, x =0;
for( int j=1;j<=1000;j++){
	
isPerfect(j);
}
return 0 ;
}

int  isPerfect(j,sum){
for(int i=1;i<=j/2;i++){
if(j%i==0)
sum=i+sum;
}
if( j == (sum)) printf("%d是完全數\n",j);
}
