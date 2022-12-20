// # Number Guessing Game
Q. here the computer will generate a number and user have to guess that number
if number enter by user is wrong then computer will tell is the number big or small
this game continuesz till user gets same answer as computer


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h> // header file for srand, rand, time

void main(){
    system("cls");
    int generatedNumber;
    char userNumber;
    int suffleOrder =0;
    int endProgram = 0;
    char ch;
    int numberWin = 0;

    while(1){
        srand(time(0)); // will generte different number
        generatedNumber = rand() % 10;
        if(generatedNumber == 0){
            generatedNumber++;
        }

        endProgram = 0;

        while(1){
            system("cls");

            // printf("\n Generated Numbers is : %d", generatedNumber);
            prinf("enter the number from 1-9 or enter H to get hint \n");
            fflush(stdin);
            scanf("%c", &userNumber);
            printf("%c", userNumber);

            if(userNumber>=49 && userNumber<=57){
                numberWin ++ ;
                // 48 and 49 are the ascii code of 0 to 9
                // we use acii code cause we want to use char as an integer

                if(generatedNumber == userNumber - 48){
                    if(numberWin == 1){
                        printf("/n Genius, number of turn taken is 1= %d", numberWin);
                    }
                    else{
                        printf("u got right number,number of turn taken is 1= %d ", numberWin);
                    }
                    // we are going to subreact 49 which is ascii code of 0 for equal
                    printf("u got right number");
                    endProgram == 1;
                }

                else if(abs(generatedNumber == userNumber - 48) == 1){
                    // abs() make negative value to postive value 
                    printf("that was so close");
                }

                else if(abs(generatedNumber == userNumber - 48) <= 2){
                    // abs() make negative value to postive value 
                    printf("that was close");
                }

                else if(abs(generatedNumber == userNumber - 48) > 2 && abs(generatedNumber == userNumber - 48) > 6){
                    // abs() make negative value to postive value 
                    printf("that was wrong guess");
                }

                else{
                    printf("wrong answer");
                }

            }
            else{
                if(userNumber == 'h' || userNumber == 'H'){
                    if(generatedNumber == 1){
                        printf("\n 1, 2 , 3");
                    }
                    else if(generatedNumber == 9){
                        printf("\n 7, 8, 9");
                    }
                    else{
                        if(suffleOrder % 2 == 0){
                            printf("/n %d, %d, %d", generatedNumber - 1, generatedNumber, generatedNumber + 1);
                        }
                        else if{
                            printf("/n %d, %d, %d", generatedNumber, generatedNumber - 1, generatedNumber + 2);
                        }
                        else if{
                            printf("/n %d, %d, %d", generatedNumber - 2, generatedNumber - 1, generatedNumber);
                        }
                        else{
                            printf("/n %d, %d, %d", generatedNumber - 1, generatedNumber - 2, generatedNumber);
                        }
                    }
                }
                else if(userNumber == 'q' || userNumber == 'Q'){
                    printf("Do You want to quit the game");
                    endProgram = 1;

                }
                else{
                    printf("enter value is invalid");
                }
            }
            getch();
            if(endProgram == 1){
                break;
            }
        }
        if(endProgram == 1){
            printf("if want to play aganin y/n");
            fflush(stdin);
            scanf("%c", &ch);
            if(ch == 'n' || ch =='N'{
                break;
            })
        }
    }
    printf("thanks for playing the game");
    getch();

}

here we will ae going to use predefined function - rand() used to make generate same numbers but it will be big
for that we are going to mod it % 10 so we will get small remainder
to not make same number we are going to use srand()

if we want from 1 to 9 instead of 0 to 9 then for that we age going to use if
if(generatedNumber == 0){
            generatedNumber++;
}

to store number for that we are going to use fflush(stdin) - this will help me to enter the number by removing the values from the buffer or memeory
note: always use fflush when we are going to use scanf

now to check if userNumber is same as generted number for that we are going to use if..else , nested if

to make game tough we are going to create a variable name int suffleOrder() so that everytime generatedNumber will not be guessed and it will depen on the situation

abs() used for making int value ngative to postive

to remove previous message system("cls");

to check how much time the user has guess number for that int NumberWin







 