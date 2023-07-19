 #include<stdio.h>
#include<math.h>

int main(void){
	
double j=1.0, k=1.0,i=1.0,re = 0 ;
double all = 1.0,x=0.0;

printf("輸入自然數e的x次方:");
scanf("%lf",&x);

for (re=1;re<100;re++ ){
for(j=1;j<=re;j++){
	k=k*j;

}
all=all+((pow(x,re))/k);

k=1;
}

printf("%lf",all);
return 0 ;
}


