#include<stdio.h>
// #include<conio.h>
int main()
{
    float gs,bs,da;
    printf("Enter basic salary");
    scanf("%f",&bs);
    if(bs<1500){
        da=90/100*bs;
    }
    else{
        da=98/100*bs
    }
    gs=bs+da+500
    printf("Gross salary = %f",gs);
}