#include<stdio.h>
#include<string.h>///string library.

int main(){
    char ch[10];
    scanf("%s",&ch);
    printf("This is ch: %s\n",ch);
    if(strcmp(ch,"Integer")==0){  ///strcmp string compare kore.
        printf("4");
    }
    else if (strcmp(ch,"Long")==0){
        printf("8");
    }
    else if (strcmp(ch,"Double")==0){
        printf("8");
    }
    else if (strcmp(ch,"Character")==0){
        printf("1");
    }
    return 0;
}
