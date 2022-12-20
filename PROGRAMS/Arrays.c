// #Arrays
Q.wap tio input 7 numbers  from the user and then display all the 7 numbers
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a,b,c,d,e,f,g;
    printf("enter the 7 numbers");
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
}
herre the problem is that we have to use 7 variables so for that we are going to use Arrays

by Arrays:
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a[7], i;
    printf("enter the 7 numbers");
    for(i=1;i<=6;i++){
        scanf("%d",&a[i]);
    }
}
here 6 beacuse arrys always goes to next one 

// arrays are used to create number of variables and also called as collecrtion of similar types elements

q.wap to input 5 numbers from the user, print only even numbers on the screen
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a[5],i;
    printf("enter the 5 numbers");
    for(i=0;i<=4;i++){
        if(a[i] % 2 ==0){
            scanf("%d", &a[i]);
        }
    }
}
