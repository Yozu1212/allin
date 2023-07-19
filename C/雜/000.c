#include<stdio.h>
int main(){
	
	int x=0,sum=0;
	printf("判斷是否為完全數:");
	scanf("%d",&x);

for(int i=1;i<=x;i++){


if(x%i==0)
sum=i+sum;
}

if( x == (sum/2)) printf("是完全數");
else printf("不是完全數");

return 0 ;
}
