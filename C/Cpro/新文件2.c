#include <stdio.h>
#include<math.h>

int main(){
	int x[10]={0};
	int y[10]={0};
	double n[10][10]={0};
	unsigned int temporary_x=0;
	unsigned int temporary_y=0;
	double final=0.0;
	
	printf("coordinate ex:x.y");
	printf("\n");
	
	for(int i=0;i<=9;i++){
			printf("coordinate %d :",i+1);
			scanf("%d.%d",&x[i],&y[i]);	
	}
	
	for(int i=0;i<=9;i++){
		for(int j=0;j<=9;j++){
			temporary_x=x[i]-x[j];
			temporary_y=y[i]-y[j];
			n[i][j]=sqrt((temporary_x)*(temporary_x)+(temporary_y)*(temporary_y));
		}
	} 
	 
	printf("\n");
	
	for(int i=0;i<=9;i++){
		for(int j=0;j<=9;j++){
			printf("[%f]\t",n[i][j]);
		}
		printf("\n");
	}
}
