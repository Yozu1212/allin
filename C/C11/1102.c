#include<stdio.h>

int main (void){
    
    FILE *cfPtr; // ���VFILE�����СA�Ω�ާ@�ɮת����c
    if ((cfPtr = fopen("clients.txt","w"))==NULL){ // �H�g�J�Ҧ�(w)�}���ɮ�
               puts("File could not be opened"); //����} �����~ 
               }
    else{
         puts("Enter the account ,name,and balance.");
         puts("Enter EOF to end input.");
         printf("%s","?");
         
         unsigned int account;//�w�q����� 
         char name[30];//�r��}�C 
         double balance ; //�A�I�� 
         
         scanf("%d%29s%lf",&account,name,&balance); //Ū�� 
         
         while (!feof(stdin)){ //���O�ϥΪ̿�J^Z�� 
               fprintf(cfPtr,"%d %s %2.f\n",account,name,balance);
                 printf("%s","?");
                 scanf("%d%29s%lf",&account,name,&balance);
                 }// �~��Ū���U�@�����
                 fclose(cfPtr); //���� 
                 }       }
                  

                        
               
               
    
    
    
