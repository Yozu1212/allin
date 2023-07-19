#include<stdio.h>

int main (void){
    
    FILE *cfPtr; //指向FILE 使用它的結構 
    if ((cfPtr = fopen("clients.txt","r"))==NULL){//開起檔案 ,使用讀取模式 
               puts("File could not be opened");//如果沒有印出 
               }
    else{
         
         unsigned int account;//正整數 
         char name[30]; // 字串陣列 
         double balance ; //服點數 
printf("%-10s%-13s%s\n","Account","Name","Balance"); //印出標題 
      fscanf(cfPtr,"%d%29s%lf",&account,name,&balance); //從檔案讀取 
         while (!feof(cfPtr)){// 當不是結尾 
 printf("%-10d%-13s%7.2f\n",account,name,balance);//印出三個 
      fscanf(cfPtr,"%d%29s%lf",&account,name,&balance);//從檔案讀取 
                 }
                 fclose(cfPtr);//關檔 
                 }          }
                  

                        
               
               
    
    
    
