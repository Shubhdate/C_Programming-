// #Operators


// conditional Operator
// used instead switch caseor else if ladder
// called as terenary Operator
// used to give conditions

Q.WAP  to input one number from the user,print "pass" if the number is 100, otherwise print"fail"
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a;
    printf("enter the number");
    scanf("%d",&a)

    (a == 100)? printf("pass"): printf("fail");
}
here if condition is true yhen it wil print pass and if niot then fail


Q.WAP to print the largest of two numbers
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a, b;
    printf("enter the two numbers");
    scanf("%d %d", &a ,&b);

    (a > b)? printf("a is big"): printf("b is big");
}


Q.wap to input one number from the user, check wheathr the number is even or odd
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a;
    printf("enter the number");
    scanf("%d", &a);

    (a % 2 == 0) ? printf("even"): printf("odd");
} 

#nested condition poerator
Q wap  print the largest numbers
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a,b,c;
    printf("enter the three numbers");
    scanf("%d %d %d", &a,&b,&c)

    (a > b)
    ? (a > c)? printf("a is big"): printf("c is big");
    : (b > c)? printf(" b is big"): printf("c is big");
}