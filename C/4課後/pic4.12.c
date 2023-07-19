#include <stdio.h>
int main() {
unsigned int x=1;
for(x=1;x<=10;++x){
if(x==5){
 continue;
  }
printf("%u ",x);
 }
puts("\nUsed continue to skip printing the value 5");
    system("pause");
    return 0;
}
