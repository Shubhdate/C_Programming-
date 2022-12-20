Q. wap to input 5 numbers from the user
then pass all the function numbers to the function gabs()
function gabs() will display all the elements on the screen

#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int A[5], i;  here array is declared

    for(i = 0; i <= 4; i++){
        printf("enter the 5 elements");
        scanf("%d", &A[i]);
    }

}

passing array we can do thus by 3 methods
method 1:
#include<stdio.h>
#include<conio.h>
void  GABS(int B[],int number);

void main(){
    clrscr();
    int A[5], i;  here array is declared

    for(i = 0; i <= 4; i++){
        printf("enter the 5 elements");
        scanf("%d", &A[i]);
    }

    GABS(A,5);
}

void GABS( int B[],int number){
    int i;
    printf("the 5 elements are \n");
    for(i = 0; i<= number - 1; i++){
        printf("%d", B[i]);
    }
}

method 2:
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int A[5], i;  here array is declared

    for(i = 0; i <= 4; i++){
        printf("enter the 5 elements");
        scanf("%d", &A[i]);
    }

}