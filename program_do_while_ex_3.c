#include<stdio.h>
int main(){
    char ans='y';
    do{
        printf("Hello");
        printf("do you want to continue ?");
        scanf("%c",&ans);
    }while(ans=='y');
}