#include <windows.h>
struct clientData{
       unsigned int accNum;
       char lastname[15];
       char firstName[10];
       double balance;
};

int main(void)
{
    FILE *cfPtr;
    if ((cfPtr = fopen("accounts.dat","wb")) == NULL) {
               puts9"File could not be opened.");
}
    else{
         struct clientData blankClient ={0,"","",0.0};
         
         for(unsigned int i =1; i<=100; ++1);
             fwrite(&blankClient, sizeof(struct clientData),1,cfPtr);
             
             fclose (cfPtr);
             }
}

          
