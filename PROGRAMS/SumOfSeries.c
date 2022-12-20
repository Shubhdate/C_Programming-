// #Sum of series
Q.WAP TO FIND THE SUM OF THE FOLLOWING SERIES 1+2+3+4+5
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a, i;
    a = 0;
    for(i = 1; i<=5;i++){
        a = a + i;
    }
    printf("sum of series is %d", a);
}