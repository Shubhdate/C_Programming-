#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    int b;
    int c;
    clrscr();
    a=10;
    b=20;
    c = a + b;
    printf("%d", c);
}
here a,b,c is variable which we have to declare ie what form it is is it int,char, etc
here we have to use %d for getting values of integer only or displaying values

#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    int b;
    int c;
    clrscr();
    a=10;
    b=20;
    c = a + b;
    c1 = a * b;
    c2 = a / b;
    c3 = a - b;
    printf("%d", c);
    printf("%d \n", c1);
    printf("%d \n", c2);
    printf("%d \n", c3);
}


// here for decimal points
#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    float b;
    int c;
    clrscr();
    a=10;
    b=12.676647;
    c = a + b;
    printf("%f", c);
}
here flaot b will be used for decimal points
here %f will used for decimal points 

// Q.wap to find simplest interest. principla is 1443.2 time is 3yrs and rate is 2.55
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    float p;
    float r;
    int n;
    float i;
    p=1443.2;
    r=2.5;
    n=3;
    i = (p*r*n)/100;
    printf("%f",i);
}


// trick: we can write all float point is one line only#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    float p,r,i;
    int n;
    p=1443.2;
    r=2.5;
    n=3;
    i = (p*r*n)/100;
    printf("%f",i);
}


// #to add two number by the users values
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a,b,c;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("enter the value of b");
    scanf("%d",&b);
    c = a + b;
    printf("%d",c);
}
here scanf() used for getting users values
here &a and &b used for getting the values of users 


#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a,b,c,c1,c2,c3;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("enter the value of b");
    scanf("%d", &b);
    c = a + b;
    c1 = a - b;
    c2 = a * b;
    c3 = a / b;
    printf("%d",c);
    printf("%d",c1);
    printf("%d",c2);
    printf("%d",c3);
}
similary for decimal point and float also

trick: we can write &a,&b,&c in one line only
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a,b,c,d;
    printf("enter the value of  a,b,c");
    scanf("%d %d %d", &a,&b,&c);
    d= a + b + c;
    printf("%d",d);
}
here the number of variable is equal to number of %d


// #WAP to input one number from the user and print the last digit of that number
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a, b;
    printf("enter the number");
    scanf("%d",&a);
    b = a % 10;
    printf("%d",b);
}
here % is modus operator gives remainder


#WAP to input one number from the user and print the all number except last number
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a, b;
    printf("enter the number");
    scanf("%d",&a);
    b = a / 10;
    printf("%d",b);
}
here / is divison operator gives quotient

