#include<stdio.h> //標準函式庫 
#define SIZE 5  //設定陣列大小5

int main (void){ 
//主程式不傳值 
int n[SIZE]={19,3,15,7,11};
//n 陣列的值 
printf("%s%13s%17s\n","Element","Value","Histogram") ;
//呼叫後面的字串 隔13字元 隔17字元 
for(size_t i = 0; i < SIZE;++i){ 
	//設i 為0 到SIZE 每次i+1 
   printf("%7u%13d      ",i,n[i]) ;
//印出 隔7字元i 隔13字元 n陣列第i項值 隔大概那麼長的空格 

for (int j = 1 ;j <= n[i];++j){
printf ("%c",'*');} //'*'符號要用單引 
//j從1 到 n 陣列 i 項的值 每圈印出一個 * j每圈+1

puts("");//換行 可以用\n取代
}
}
 
   
   
