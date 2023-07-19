#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define SIZE 10

int y[10][10] = {
    {0, 5, 8, 6, 7, 8, 1, 6, 4, 10},
    {5, 0, 7, 6, 6, 7, 4, 8, 11, 5},
    {8, 7, 0, 10, 7, 8, 5, 1, 7, 2},
    {6, 6, 10, 0, 4, 5, 1, 6, 10, 7},
    {7, 6, 7, 4, 0, 6, 2, 11, 6, 5},
    {8, 7, 8, 5, 6, 0, 5, 2, 10, 5},
    {1, 4, 5, 1, 2, 5, 0, 5, 1, 7},
    {6, 8, 1, 6, 11, 2, 5, 0, 10, 6},
    {4, 11, 7, 10, 6, 10, 1, 10, 0, 1},
    {10, 5, 2, 7, 5, 5, 7, 6, 1, 0}
};

int f[10][10]={0} ;
int c[][10]={0} ;
int all [20][10]={0};

void cd(int x[10][10]) ;
void aa(int x[10][10]);
void ra(int x[10][10]);
void cb(int arr[][10], int row) ;
void cc(int x[10][10]);
void p(int x[][10],int n );
void ss(int x[10][10],int k );
void al(int a );

int main() {
	
	
    aa(f);//抓十組 

    p(f,10);
	al(0);
    ra(f);//上下顛倒 
    p(f,10);
    cc(f);// 前後順序 
    p(f,10);
    al(1); // 0 = 0~9  1=10~19 
    p(all,20); //印出20條 
    
	return 0 ;
	}
	



void al(int a ){
	
	if (a==0){
		 for (int i = 0; i < 10; i++) {
	  	for (int j = 0; j < 10; j++){
		    all[i][j]= f[i][j];
	}
}
}else{
	  for (int i = 0; i < 20; i++) {
	  	for (int j = 0; j < 10; j++){
		    all[(10+i)][j]= f[i][j];
}
}
}
}
	
void ss(int x[10][10],int k){
	int sum = 0 ;
    for (int i = 0; i < 9; i++) {
     c[k][i] = y[x[k][i]-1][x[k][i+1]-1];
    }
   c[k][9] = y[x[k][9] - 1][x[k][0] - 1];

  for (int i = 0; i < 9; i++) {
  	sum += c[k][i];
  	printf("%d	",c[k][i]);
  }	printf(" sum : %d\n",sum);
  }
	  

void cd(int x[10][10]) {
	 printf("cd\n");
    for (int i = 0; i < 10; i++) {
        ss(x, i);
    }
}

void cc(int x[10][10]) {
	 printf("cc\n");
    for (int i = 0; i < 10; i++) {
        cb(x, i);
    }
}
void cb(int arr[][10], int row) {//rand
    int start = rand() % 10;
    int end = rand() % 10;
    while (start < end) {
        int temp = arr[row][start];
        arr[row][start] = arr[row][end];
        arr[row][end] = temp;
        start++;
        end--;
    }
}
	
	
	
	
	
	
	
	
	
	
	
	
	

void ra(int x[10][10]) {
printf("ra\n");
int order[10] = {0};
for (int i = 0; i < 10; i++) {
order[i] = i;
}
for (int i = 0; i < 10; i++) {
int j = rand() % (i + 1);
int temp = order[i];
order[i] = order[j];
order[j] = temp;
}
for (int i = 0; i < 10; i++) {
        int original = order[i];
        for (int j = 0; j < 10; j++) {
            c[i][j] = x[original][j];
        }
		}
for (int i = 0; i < 10; i++) {
for (int j = 0; j < 10; j++) {x[i][j] = c[i][j];
}
}
}
void aa(int x[10][10]){
		for (int i = 0; i <= 9; i++) {
    	 for (int j = 0; j <= 9; j++) {
    	 	x[i][j]=j+1;
}
}
	printf("aa\n");
	int h=0,r=0 ;
    for (int i = 1; i <= 9; i++) {
    	 for (int j = 0; j <= 9; j++) {
        r = (rand() % 9) + 1;
        h = x[j][i];
        x[j][i] =x[j][r];
        x[j][r]=h;
		}
		}
		}
void p(int x[][10],int n){
	printf("\n");
	
	if(n==20){
int sum = 0 ;
for (int i = 0; i <= 19; i++) {
	sum = 0;
	for (int j = 0; j <= 9; j++) {
	sum += c[i][j];
	printf("%d	",x[i][j]);}
	printf("\n");
		for (int j = 0; j < 9; j++) {
			c[i][j] = y[x[i][j]-1][x[i][j+1]-1];
			printf("%d	",c[i][j]);
}c[i][9] = y[x[i][9] - 1][x[i][0] - 1];
printf(" sum : %d\n",sum);	
}	
}
else if(n==10){
	for (int i = 0; i <= 9; i++) {
	for (int j = 0; j <= 9; j++) {
	printf("%d ",x[i][j]);		
	}printf("\n");
}
}
}


