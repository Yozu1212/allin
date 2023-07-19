//柱 /// 
#include<stdio.h> //標準函式庫 

void printArray(int a[][3]);
//設定 printArray函式 不回傳  a 陣列為 自動[]裡面包三個的二維陣列 

int main (void){ 
//主程式不傳值 

int array1[2][3]={{1,2,3},{4,5,6}};
puts("Values in array1 by row are:");
printArray(array1);
// 設定二維陣列 1 印出文字 傳入printArray函式 

int array2[2][3]={1,2,3,4,5}; //第一組先收3個 第二組收三個 但是只有兩個 所以第三個為0 
puts("Values in array2 by row are:");
printArray(array2);
// 設定一維陣列 2 印出文字 傳入printArray函式

int array3[2][3]={{1,2},{4}}; //第一組收三個 12 沒有三為0  
puts("Values in array3 by row are:");
printArray(array3);
// 設定二維陣列 3 但是不到3個值 印出文字 傳入printArray函式
}
void printArray(int a[][3]){
//設定  printArray函式
for(size_t i = 0; i <=1;++i){ 
	//設i 為0 i到1 每次i+1  0,1 兩個 
	for(size_t j = 0; j <= 2;++j){ 
	//設i 為0 j到2 每次i+1 0,1,2三個 
 printf("%d ",a[i][j]); //如果沒東西 為0 
}
printf("\n");
}
}


