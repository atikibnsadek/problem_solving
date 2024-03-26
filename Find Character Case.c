#include<stdio.h>

void main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=65&&ch<=90){
        printf("1");
    }
    else if(ch>=97&&ch<=122){
        printf("0");
    }
    else{
        printf("-1");
    }
}