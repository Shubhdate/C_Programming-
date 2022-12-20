// #TicTacToe Game

player 1: x (char)
player 2 : 0 (input as char beacuse 0 is int)
condition for winning game is 3 perfect same symobol in a straight line 

#include<stdio.h>
#include<conio.h>
void main(){
    char a , b;
    clrscr();
    printf("enter two charcters");
    scanf("%c", &a);
    scanf("%c", &b);
    printf("a = %c, b=%c", a, b);
    getch();
}
here in this we will get only one chance to input but we have use 2 scanf it is beacuse of buffer bvalue is present in one already
note: input goes to buffer but since buffer is full the data which is already present it goes ie garbage value
To avoid this we have to use fflush(stdin);
every time we use scanf the we are going to use fflush(stdin);

how to initalize char eg.char a[9]={'1','2',...,'9'}

postion then we will replace that postion with symbols

first we will make an layout:

#include<stdio.h>
#include<conio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
void check(char, char);

void gameName(){
    printf("\n\n\t\t\t Tic-Tac-Toe Game \n");
}

void layout(){
    printf("\n\n\t\t\t---|---|--- \n");
    printf("\t\t\t %c | %c | %c \n", a[0],a[1],a[2]);
    printf("\t\t\t---|---|--- \n");
    printf("\t\t\t %c | %c | %c \n", a[3],a[4],a[5]);
    printf("\t\t\t---|---|--- \n");
    printf("\t\t\t %c | %c | %c \n", a[6],a[7],a[8]);
    printf("\t\t\t---|---|--- \n");
}

void playerSymbol(){
    printf("\n player-1 symbol: x \n ");
    printf("\n player-2 symbol: 0 \n ");
}

void whoStart(){
    char whoplayfirst;
    printf("\n enter who will strat the game player 1 or player 2");
    scanf("%c", &whoplayfirst);
}

int count = 0;

void letsplay(){
    char ppostion, psymbol;
    printf("\n enter the position and symbol: \n" );
    fflush(stdin);
    scanf("%c",&ppostion);
    fflush(stdin);
    scanf("%c",&psymbol);
    count++;

    check(ppostion, psymbol); //used for searching the particular position and will place that symbol in it

}

void check(char P,char S){
    int i;
    for(i=0; i<= 8; i++){
        if(a[i]==P){
            a[i] = S;
        }
    }
}

int whoWin(){
    // contidion for horizontal, vertocal and diagonal
    //position 1
    if((a[0]=='x' && a[1]=='x' && a[2]=='x') || (a[0]=='x' && a[3]=='x' && a[6]=='x') || (a[0]=='x' && a[4]=='x' && a[8]=='x')) {
        return(100);
    }
    else if((a[0]=='0' && a[1]=='0' && a[2]=='0') || (a[0]=='0' && a[3]=='0' && a[6]=='0') || (a[0]=='0' && a[4]=='0' && a[8]=='0')) {
        return(200);
    }

    //position 2
    else if(a[1]=='x' && a[4]=='x' && a[7]=='x') {
        return(100);
    }
    else if(a[1]=='0' && a[4]=='0' && a[7]=='0') {
        return(200);
    }

    //poition 3
    else if((a[2]=='x' && a[5]=='x' && a[8]=='x') || (a[2]=='x' && a[4]=='x' && a[6]=='x')) {
        return(100);
    }
    else if((a[2]=='0' && a[5]=='0' && a[8]=='0') || (a[2]=='0' && a[4]=='0' && a[6]=='0')) {
        return(200);
    }

    //position 4
    else if(a[3]=='x' && a[4]=='x' && a[5]=='x') {
        return(100);
    }
    else if(a[3]=='0' && a[4]=='0' && a[5]=='0') {
        return(200);
    }

    //position 5
    else if(a[1]=='x' && a[4]=='x' && a[7]=='x') {
        return(100);
    }
    else if(a[3]=='0' && a[4]=='0' && a[7]=='0') {
        return(200);
    }

    //position 6 already done

    //position 7
    else if(a[6]=='x' && a[7]=='x' && a[8]=='x') {
        return(100);
    }
    else if(a[6]=='0' && a[7]=='0' && a[8]=='0') {
        return(200);
    }

    //position 8 already done

    //position 9 already done

    else if{
        return(300);
    }
    
}

void main(){
    clrscr();
    int store;
    char ch;

    labelstart:
    gameName(); // used for gamer name
    layout(); // used for making layout of the game
    playerSymbol(); // used for symbols of player1 and 2
    whoStart(); // used for getting to know who will play first
    play(); // used for playing the game

    label:
    clrscr(); // this will earse our previous symbol
    layout(); // this will show us the postion and symbol which we have placed in it that why twice
    play();
    store = whoWin(); //used for storing vazlues
    clrscr();
    layout();

    if(count<9){
        if(store == 100){
            printf("player 1 won");
            count = 0;
        }
        else if(store == 200){
            printf("player 2 won");
            count = 0;
        }
        else{
            goto label; //used for repeatoing unless one player win
        }
    }
    else {
        printf("game draw");
        count = 0;
    }
    

    printf("\n do you want to continue the game Y/N");
    fflush(stdin);
    scanf("%c", &ch);
    if(ch=='y' || ch=='Y'){
        a[0] = '1';
        a[1] = '2';
        a[2] = '3';
        a[3] = '4';
        a[4] = '5';
        a[5] = '6';
        a[6] = '7';
        a[7] = '8';
        a[8] = '9';
        goto labelstart;
    }
    getch();
}


here we have declare array globally
now we have to code for player symbol
give msg for user ti input values but we have to know who will play first
now take input for that positional place ie postional symbol and positional place
now function have to make to see if someone is win or draw
now code for draw
now once win we have to empty the array that is initalize the array


