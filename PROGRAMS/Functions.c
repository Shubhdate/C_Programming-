// #Functions
Q.wap to do following operations:
input 2 numbers from the user and add it and display it
repeat step1
repeat step1
repeat step1
print gabs classes


#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a,b,c,i;

    for(i=1;i<=4;i++){
        printf("enter the two numbers");
        scanf("%d %d", &a,&b);
        c = a + b;
        printf("sum is %d \n", c);
    }
    
    printf("gabs classes");

}

Q.wap to do following operations:
input 2 numbers from the user and add it and display it
repeat step1
print gabs classes
repeat step1
print learning c
repeat step1
repeat step1

#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a, b,c,i;

    for(i=1;i<=1;i++){
        printf("enter the two numbers");
        scanf("%d %d", &a,&b);
        c = a + b;
        printf("%d", c);
    }

    printf("gabs classes");

    for(i=1;i<=1;i++){
        printf("enter the two numbers");
        scanf("%d %d", &a,&b);
        c = a + b;
        printf("%d", c);
    }

    printf("gabs classes");

    for(i=1;i<=2;i++){
        printf("enter the two numbers");
        scanf("%d %d", &a,&b);
        c = a + b;
        printf("%d", c);
    }

}

note here in this sequence is not same so we have to write multiple times for 
to solve this we are going to use functions:


#include<stdio.h>
#include<conio.h>
void add();

void main(){
    clrscr();
    add();
    add();
    printf("gabs classes");
    add();
    printf("learning c");
    add();
    add();

}

void add(){
    int a,b,c;
    printf("enter the two numbers");
    scanf("%d %d", &a,&b);
    c = a + b;
    printf("%d", c);
}
// function are used to do work multiple time but that is not in sequence so we are going to use it 


Q.wap to do following operations:
input 2 numbers from the user and add it and display it
input 2 numbers from the user and multiply it and display it
print gabs classes
repeat step1
repesat step2
repesat step2
repeat step1
repeat step1



#include<stdio.h>
#include<conio.h>
void add();
void multiply();

void main(){
    add();
    multiply();
    printf("gabs classes");
    add();
    multiply();
    multiply();
    add();
    add();

}

void add(){
    int a, b, c;
    printf("enter the two numbers");
    scanf("%d %d", &a,&b);
    c = a + b;
    printf("%d", c);
}

void multiply(){
    int d,e,f;
    printf("enter thje two numbers");
    scanf("%d %d", &d,&e);
    f = d * e;
    printf("multiply is %d", f);
}

here add() is called as functioning calling
content inside function calling is called function definition
void add() is claled as function declartion


// #function return
Q wap to do the following operation:
add 100 and 200 and display sum
add 200 and 300 display sum
add 100 and 400 display sum
print gabs
add 2 and 3 dislaplay the sum
add 20 and 30 display the sum
print gabs classes


#include<stdio.h>
#include<conio.h>
void add();

void main(){
    add(100,200);
    add(200,300);
    add(100,400);
    printf("gabs");
    add(2,3);
    add(20,30);
    printf("gabs classes");
}

void add(int a, int b){
    int c;
    c = a + b;
    printf(" sum is %d \n",c);
}

note:
q. wap to input two numbers from the user in main function , pass both the numbers to the function add()
then function add() will find the sum of both the numbers
sum will be displayed in the main function
#include<stdio.h>
#include<conio.h>

int add(int,int);
void main(){
    int a, b, ans;
    printf("enter tyhe two numbers");
    scanf("%d %d", &a,&b);
    
    ans = add(a,b);
    printf("sum of two numbers is %d", ans);
}

int add(int a, int b){
    int c;
    c = a + b;
    return c;
}
// note: we dont use void when we are going to return the functions


Q wap to input three numbers from the user in main() function
pass all the three numbers to the avg () function 
the function avg() will find the average of all 3 numbers 
and the average will be displayed in the main()


#include<stdio.h>
#include<conio.h>

float avg(int,int,int);
void main(){
    clrscr();
    int a, b, c;
    float ans;
    printf("enter the threee numbers");
    scanf("%d%d%d", &a,&b,&c);

    ans = avg(a,b,c);
    printf("avg is %f", &ans);
}

float avg(int a, int b, int c){
    float d;
    d = (a + b + c) / 3;
    return d;
}

here float beacuse we can get decimal answers


