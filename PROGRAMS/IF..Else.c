// #If...else - 
// used to fing someone is eligible or not and also for condition
Q.WAP to input one number from the user., print "hello world" if the number is greater than 10 

#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a;
    printf("enter the number");
    scanf("%d",&a);

    if(a > 10)
    {
        printf("hello world")
    }
}


Q.WAP to input one number from the user., print "hello world" if the number is greater than 10 or else print gabs
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a;
    printf("enter the number");
    scanf("%d",&a);

    if(a > 10)
    {
        printf("hello world")
    }
    else{
        printf("gabs")
    }
}
// note: always use == for equal to 

Q.WAP for checking number is odd or even
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if( a % 2 == 0 )
    {
        printf("even");
    }
    else{
        printf("odd");
    }
}


Q.WAP if the person is eligivble for vote or not
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a;
    printf("enter the age");
    scanf("%d", &a);
    if(a >= 18){
        printf("user is valid for voting");
    }
    else{
        printf("user is not valid for voting");
    }
}


// Q.WAP to input marks of one subject from the user. print "pass" if the marks is greater or equal to 90 but less than 100 otherwise print "fail"
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a;
    printf("enter the marks");
    scanf("%d",&a);
    if(a >= 90 && a < 100){
        printf("pass");
    }
    else{
        printf("fail");
    }
}
// here && is and ; || is not
// here if we want both true then && and if one should be false or we want one should be true then ||


Q.WAP to input one character from the user , check whether it is vowel or not
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    char ch;
    printf("enter the vowel");
    scanf("%c",&ch)
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("it is vowel");
    }
    else{
        printf("it is not");
    }
}

// #if... else ladder
// #nested if

Q.WAP  to iput one nuymber from the user.print gabs classes if number is 100, prints gabs if number is 90, print classes if number is 80, and nothing if number is 70
#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a == 100){
        printf("gabs classes");
    }
    else if(a == 90){
        printf("gabs");
    }
    else if(a == 80){
        printf("classes");
    }
    else if(a == 70){
        printf("nothing");
    }
}

// #using switch case
#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int a;
    printf("enter the number");
    scanf("%d",&a);
    switch(a)
    {
        case 1: 
        a == 100
        printf("gabs classes");
        break;

        case 2: 
        a == 90
        printf("gabs");
        break;

        case 3: 
        a == 80
        printf("classes");
        break;

        case 4: 
        a == 70
        printf("nothing");
        break;
    }
}
