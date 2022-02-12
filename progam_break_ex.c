#include<stdio.h>
int main(){
    int i=2,num=30;
    while(i<=num-1)
    {   if(num%i==0){
        printf("Not prime")
        
        break;}
        i++;
    }
}