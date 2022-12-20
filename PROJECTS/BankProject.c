// #Bank Management Project 
Q wap to do following operations:
deposit of money
withdrawl of money
check balance of money



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
    system("cls");
    int balance=1000;
    int choice, amount;
    int home=0;
    printf("Welcome to the Bank");

    while(1){
        system("cls");
        printf("1.Deposit the money \n");
        printf("2.withdraw the money \n");
        printf("3.check banace\n");
        printf("4.exit \n");

        printf("enter your choice \n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("enter the amout which has to be deposited: \n");
            scanf("%d",&amount);
            balance = balance + amount;
            printf("success \n");
            break();

            case 2:
            printf("enter the amout which has to be withdraw:");
            if(amount <= balance){
                balance = balance - amount;
                printf("success \n");
            }
            else{
                printf("not sufficient balance \n");
            }
            break();

            case 3:
            printf("your current balance is %d \n", balance);
            break();

            case 4:
            exit(0);
            break;

            default:
            printf("invalid choice \n");
            break();
        }

        if(home == 1){
            printf("thank you \n");
            break;
        }
    }

    printf("thank you for your service");
    getch();
}