#Rock-Paper-Scissor  Game

#include<stdio.h>
#include<conio.h>

// int you, computer;
typedef int PLAYER;
PLAYER you,computer; // second metjod to define datatypes

int menu(){
    int choice;
    printf("\n 1.select rock");
    printf("\n 2.select paper");
    printf("\n 3.select scissor");
    printf("\n 4.exit");

    printf("\nenter your choice:");
    fflush(stdin);
    scanf("%d", &choice);
    return(choice);
}

void setup(){
    label:
    computer = rand() % 4;// we will get from 0 to 4
    if(computer==0){
        goto label;
    }
    you = menu();
}

void logic(){
    switch(you){
        case 1://for rock
            if(computer == 1){
                printf("\n game draw");
                printf("\n you = rock \n computer = rock");
            }
            else if(computer == 2){
                printf("\n Computer Won");
                printf("\n you = rock \n computer = paper");
            }
            else{
                printf("\n You Won");
                printf("\n you = rock \n computer = scissor");
            }
            break;

        case 2://for paper
            if(computer == 1){
                printf("\n You won");
                printf("\n you = paper \n computer = rock");
            }
            else if(computer == 2){
                printf("\n You draw");
                printf("\n you = paper \n computer = paper");
            }
            else{
                printf("\n Computer Wins");
                printf("\n you = paper \n computer = scissor");
            }
            break;

        case 3://for siccsor
            if(computer == 1){
                printf("\n Computer wins ");
                printf("\n you = scissor \n computer = rock");
            }
            else if(computer == 2){
                printf("\n You Won");
                printf("\n you = scissor \n computer = paper");
            }
            else{
                printf("\n Game draw");
                printf("\n you = scissor \n computer = scissor");
            }
            break;

        case 4:exit(0);
        deafult:printf("\n invalid choice");
    }
}

int main(){
    printf("\n Rock Paper Scissor game");
    while(1){
        clrscr();
        setup();
        logic();
        getch();
    }
    return 0;
}