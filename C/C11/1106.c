#include<stdio.h>

int main (void){
    
    FILE *cfPtr; //���VFILE �ϥΥ������c 
    if ((cfPtr = fopen("clients.txt","r"))==NULL){//�}�_�ɮ� ,�ϥ�Ū���Ҧ� 
               puts("File could not be opened");//�p�G�S���L�X 
               }
    else{
         
         unsigned int account;//����� 
         char name[30]; // �r��}�C 
         double balance ; //�A�I�� 
printf("%-10s%-13s%s\n","Account","Name","Balance"); //�L�X���D 
      fscanf(cfPtr,"%d%29s%lf",&account,name,&balance); //�q�ɮ�Ū�� 
         while (!feof(cfPtr)){// ���O���� 
 printf("%-10d%-13s%7.2f\n",account,name,balance);//�L�X�T�� 
      fscanf(cfPtr,"%d%29s%lf",&account,name,&balance);//�q�ɮ�Ū�� 
                 }
                 fclose(cfPtr);//���� 
                 }          }
                  

                        
               
               
    
    
    
