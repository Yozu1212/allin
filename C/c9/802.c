#include <stdio.h>
#include <ctype.h>//じ矪瞶ㄧΑ畐 

int main() {
    char input;
    printf("叫块じ: ");
    scanf("%c", &input);//isdigit 0-9ぇ丁计 
    
    printf("\n%c%s%s\n",  input, /*c */isdigit( input ) ? "琌":"ぃ琌", /*材s耞琌ぃ琌*/ "计");/*s耞ぐ或*/ 
    printf("%c%s%s\n",  input,isalpha( input ) ? "琌":"ぃ琌", "ダ");//isalpha ダ
	printf("%c%s%s\n",  input,isalnum( input ) ? "琌":"ぃ琌", "计┪ダ");//isalnum ダ┪计
	printf("%c%s%s\n",  input,isxdigit( input ) ? "琌":"ぃ琌", "16秈计");//A-F a-f 0-9 .
	printf("%c%s%s\n",  input,islower( input ) ? "琌糶":"琌糶", "ダ");//琌糶.  
    printf("%c%s%s\n",  input,isblank( input ) ? "琌":"ぃ琌", "");//琌 
    return 0;//琖 把σpic8.1-8.2 
}
