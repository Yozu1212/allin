/* *************** */ 
/*                 */ 
/*       柱        */ 
/*                 */
/* *************** */     
#include<stdio.h> //標準函式庫 
#define SIZE 12  //設定陣列大小12

int main (void){ 
//主程式不傳值 
int a[SIZE]={1,3,5,4,7,2,99,16,45,67,89,45};
//a 陣列的值 
int total =0;
//初始化 total 設0 

for(size_t i=0;i<SIZE;++i){
	//設i 為0 到SIZE 每次i+1 
	total += a[i];
	//total= total+a陣列的i值 
} 
printf("Total of array element values is %d\n",total);
//印出這段話+total 的值 
} 
