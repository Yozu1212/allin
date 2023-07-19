 #include<stdio.h>
int main(void){
	int j=0, k=1;
double all = 1.0;
int re = 0 ;
for (re=1;re<10;re++ ){
k=1;
for(j=1;j<=re;j++){
	k=k*j;
	
} 
all=all+(1.0/(double)k);
}
printf("%f",all);
return 0 ;
}


