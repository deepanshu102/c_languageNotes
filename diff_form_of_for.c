#include<stdio.h>
int main(){
    int i=1,ii,iii;
    //1
    for(i<10;i++){
        printf("%d",i);
    }
    // 2
    for(ii>=0;){
        printf("%d",ii);
        ii++;
    }
    // 3
    iii=1;
    for(;iii++<=10;){
        printf("%d",iii);
    }
    // 4
    for(iv=0;iv<=10;){
        printf("%d",iv);
        iv=iv++;
    }
}