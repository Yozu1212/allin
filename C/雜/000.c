#include<stdio.h>
int main(){
	
	int x=0,sum=0;
	printf("�P�_�O�_��������:");
	scanf("%d",&x);

for(int i=1;i<=x;i++){


if(x%i==0)
sum=i+sum;
}

if( x == (sum/2)) printf("�O������");
else printf("���O������");

return 0 ;
}
