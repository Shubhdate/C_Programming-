#Check number is factorial number or not and find factorial of number
eg 5*4*3*2*1
#include<stdio.h>
#include<conioh>
void main(){
    clrscr();
    int n, a, i;
    printf("enter the number");
    scanf("%d", &a);

    a = 1;
    for(i=n; i>=1 ;i=i-1){
        a = a*i;
    }
    printf("factorial is %d",a);
}