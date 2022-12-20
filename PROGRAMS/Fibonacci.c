// #Fibonacci Series 0,1,1,2,3,5,8,13
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a, b,c ,i;
    a = 0;
    b = 1;
    printf("%d",a);
    printf("%d",b);

    for(i = 1; i<=6; i++){
        c = ab+b;
        printf("%d",c);
        a = b;
        b = c;
    }
}
here 6 beacuse we already given a and b values


// #by user find fibonacci series
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a, b,c ,i,n;
    printf("enter the number");
    scanf("%d", &n);
    a = 0;
    b = 1;
    printf("%d",a);
    printf("%d",b);

    for(i = 1; i<=n - 2; i++){
        c = ab+b;
        printf("%d",c);
        a = b;
        b = c;
    }
}