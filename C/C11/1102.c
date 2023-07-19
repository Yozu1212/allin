#include<stdio.h>

int main (void){
    
    FILE *cfPtr; // 指向FILE的指標，用於操作檔案的結構
    if ((cfPtr = fopen("clients.txt","w"))==NULL){ // 以寫入模式(w)開啟檔案
               puts("File could not be opened"); //不能開 跳錯誤 
               }
    else{
         puts("Enter the account ,name,and balance.");
         puts("Enter EOF to end input.");
         printf("%s","?");
         
         unsigned int account;//定義正整數 
         char name[30];//字串陣列 
         double balance ; //服點數 
         
         scanf("%d%29s%lf",&account,name,&balance); //讀取 
         
         while (!feof(stdin)){ //當不是使用者輸入^Z時 
               fprintf(cfPtr,"%d %s %2.f\n",account,name,balance);
                 printf("%s","?");
                 scanf("%d%29s%lf",&account,name,&balance);
                 }// 繼續讀取下一筆資料
                 fclose(cfPtr); //關檔 
                 }       }
                  

                        
               
               
    
    
    
