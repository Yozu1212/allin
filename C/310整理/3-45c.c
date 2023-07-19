#include<stdio.h>
#include<math.h>

int main (void) {
double  e =1 , x=0, n=1, m=1 ,all = 1.0; 
printf("計算e^X \n請輸入一個X值:");
scanf("%lf",&x);

while (n<100){
	m*=n;
	all=all+((pow(x,n) )/m);
		n++;
}

printf("e^%lf值為%lf",x,all);
return 0;
}
