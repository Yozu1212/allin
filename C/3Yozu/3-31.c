#include<stdio.h>

int main(void){
int x=5,y=8;
puts("(A)");
if(x==5)
if (y==8)
puts("@@@@@");
else
puts("#####");
puts("$$$$$");
puts("&&&&&");

puts("\n(B)");
if(x==5)
if (y==8)
puts("@@@@@");
else{
puts("#####");
puts("$$$$$");
puts("&&&&&");
puts("\n");}

puts("\n(C)");
if(x==5)
if (y==8)
puts("@@@@@");
else{
puts("#####");
puts("$$$$$");}
puts("&&&&&");

puts("\n(D)");
y=7;
if(x==5)
if (y==8)
puts("@@@@@");
else{
puts("#####");
puts("$$$$$");}
puts("&&&&&");
	 
system("pause");
return 0;
  }
			
