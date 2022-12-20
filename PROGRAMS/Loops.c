// #Loops - used for repeating something or for doing work again and agian by writing once
// #for, while, do..while loops
Q.wap to pront 5 times gabs classes
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    printf("gabs classes \n");
    printf("gabs classes \n");
    printf("gabs classes \n");
    printf("gabs classes \n");
    printf("gabs classes \n");
}

by loops:
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    
    for(i=1; i<=5 ;i++)
    {
        printf("gabs classes");
    }
}
// here we should know three things strting value, changing value, repeating condition

Q wap to print 6 times hello . 1 time world and then 5 time welcome
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    for(i =1; i <=6; i++){
        printf("hello");
    }
    printf("world");
    for(i =1; i <=5; i++){
        printf("welcome");
    }
}


Q.wap to printr 1,2,3,4,5
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i;
    for(i =1; i <=5;i++)
    {
        printf(" %d \n");
    }
}

Q.wap to print 2,4,6,8,10
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i;
    for(i = 2; i <=10 ;i =i+2)
    {
        printf(" %d \n");
    }
}


// #Loops - used for repeating something or for doing work again and agian by writing once
// #for, while, do..while loops
Q.wap to pront 5 times gabs classes
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    printf("gabs classes \n");
    printf("gabs classes \n");
    printf("gabs classes \n");
    printf("gabs classes \n");
    printf("gabs classes \n");
}

by loops:
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    
    for(i=1; i<=5 ;i++)
    {
        printf("gabs classes");
    }
}
// here we should know three things strting value, changing value, repeating condition

Q wap to print 6 times hello . 1 time world and then 5 time welcome
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    for(i =1; i <=6; i++){
        printf("hello");
    }
    printf("world");
    for(i =1; i <=5; i++){
        printf("welcome");
    }
}


Q.wap to printr 1,2,3,4,5
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i;
    for(i =1; i <=5;i++)
    {
        printf(" %d \n");
    }
}

Q.wap to print 2,4,6,8,10
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i;
    for(i = 2; i <=10 ;i =i+2)
    {
        printf(" %d \n");
    }
}


Q.wap to input two numbers from the user a and b,print all the numbers between a and b ( including a and b)
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a, b,i;
    printf("enter the value of a and b");
    scanf("%d %d", &a,&b);
    for(i=a; i<=b;i++){
        printf("%d \n");
    }
}

Q.wap to input two numbers from the user a and b,print all the EVEN numbers between a and b ( including a and b)
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a, b,i;
    printf("enter the numbers a and b");
    scanf("%d %d", &a,&b);

    for(i = a; i<=b; i++){
        if(i%2 == 0){
            printf("%d \n");
        }
    }
}



// #while Loop
Q.wap to print 5 times gabs classes with the help of while
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i;
    i = 1; (strting value)
    while(i <= 5[repeating condition]){
        printf("gabs classes \n");
        i = i + 1; (changing value)
        // or we can write i++
    }
}
here in while we should konow three things strting value, changing value, repeating condition


Q wap to print 6 times hello . 1 time world and then 5 time welcome with the help of while
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i;

    i = 1;
    while(i <= 6){
        printf("hello \n");
        i++;
    }

    printf("world \n");

    i = 1;
    while(i <= 5){
        printf("welcome \n");
        i++;
    }
}
