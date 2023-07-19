#include<stdio.h> //標準函式庫 
#define SIZE 10  //設定陣大小10 

int main (void){ 
//主程式不傳值 
int a[SIZE]={2,6,4,8,10,12,89,68,45,37};
//a 陣列的值 
puts("Data items in original order");
//印出這句話換行 
for(size_t i = 0; i < SIZE;++i){ 
	//設i 為0 i到SIZE 每次i+1 
   printf("%4d",a[i]) ;
//印出 隔4 a陣列第i項值
}
for(unsigned int pass = 1; pass < SIZE;++pass){ 
	//設 pass為正整數值1 pass到 SIZE 每次pass+1 

 for(size_t i = 0; i < SIZE;++i){ 
//設i 為0 i到SIZE 每次i+1 
	if(a[i]>a[i+1]){
		//如果 a陣列當前值大於下一個值執行
		int hold = a[i];
		a[i] = a[i+1];
		a[i+1] = hold;
		// 保持住最小的之後印出 
		//ex : 6>4 (二三項)  當前保持(6) 讓當前等於下一位(4) 下一位保持(4) 繼續往後比較(4) 
	}
}
}
puts("\nData item in ascending order");
// 印出這句話 
for(size_t i = 0; i < SIZE;++i){ 
	//設i 為0 i到SIZE 每次i+1 
printf("%4d",a[i]);
//空4個字元 印出 a陣列 i值 
}
puts("");//換行 
}

 
   
   
