Q. wap to find number is prime number or not 
prime number is divide by only 1 and its own number eg 3,7,11,...
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int a, i, flag;
    printf("enter the value");
    scanf("%d", &a);

    if(n ==2){
        printf("number is prime");
    }
    else{
        for(i = a; i<= n - 1; i++){
            if(a % i ==0){
                flag = 0;
                break;
            }
            else{
                flag = 1;
            }
        }

        if(flag == 1){
            printf("number is prime");
        }
        else{
            printf("number is not prime");
        }
    }
}