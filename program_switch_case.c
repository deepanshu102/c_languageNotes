#include<stdio.h>
int main(){
    char ch;
    int a,b,c,i;
    do{
        //Using do-while loop
        printf("Enter 2 numbers");
        scanf("%d\n%d",&a,&b);
        printf("\n------MENU--------");
        printf("\n1.Addtion those values");
        printf("\n2.Subraction those values");
        printf("\n3.Multiply those values");
        printf("\n4. Divide those values");
        printf("\nEnter your choice:-");
        scanf("%d",&i);
        switch(i){
            case 1: c=a+b;
                    break;
            case 2: c=a-b;
                    break;
            case 3:c=a*b;
                   break;
            case 4:c=a/b;
                   break;
            default: printf("Invalid Operation performed");
        }
        printf("\nresult:-%d",c);
        printf("\nDo you want to continue:-");
        scanf("%c",&ch);
    }while(ch=='Y'||ch=='y');
}