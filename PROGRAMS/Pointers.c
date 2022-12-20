// #Pointers
Q observer the following program
void main(){
    int a = 10;
}
statement for printing value of a
=> printf("%d", a);

statemenrt for displaying an address of address
=> printf("%u", &a);

statement to display the value of a
=> printf("%d", *(&a));

statement for declare a variable
=> int * p;

statement to store address of a in p
=> p = &a;

note: simple variable caanot contain an address only pointer can contain an address
* used at a time of declaring a variable that indicates pointer not value



// #call by value/ call by reference

// #Menu driven program
option 
1 - is addition of 2 numbers
2 - multiplication of 2 numbers
3 - subtraction of 2 numbers
4 - exit


#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();

    int choice ,a,b,c;
    char ch;


    do(){
        printf("menu \n");
        printf("1. addition \n");
        printf("2. multiplication \n");
        printf("3. subtraction \n");
        printf("4. exit \n");

        printf("enter your choice: \n");
        scanf("%d", &choice);

        if(choice == 1){
            printf("enter two numbers \n");
            scanf("%d %d", &a, &b);
            c = a + b;
            printf("sum is %d \n", c);
        }

        else if(choice == 2){
            printf("enter two numbers \n");
            scanf("%d %d", &a, &b);
            c = a * b;
            printf("multiplication is %d \n", c);
        }

        else if(choice == 3){
            printf("enter two numbers \n");
            scanf("%d %d", &a, &b);
            c = a - b;
            printf("subtraction is %d \n", c);
        }

        else if(choice ==4){
            exit(0);
        }

        else{
            printf("you have entered wrong choice");
        }

        printf("do u wish to contine y/n");
        scanf("%c",&ch);  or we can write ch = getch();
    }
    while(ch == 'y' || ch == 'n');

    getch();

}
exit(0) - header file


// menu driven program using switch case:
option 
1 - is addition of 2 numbers
2 - multiplication of 2 numbers
3 - subtraction of 2 numbers
4 - exit

#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int choice, a, b,c;
    char ch;

    
    do{
        printf("menu \n");
        printf("1. addition \n");
        printf("2. multiplication \n");
        printf("3. subtraction \n");
        printf("4. exit \n");

        printf("enter your choice: \n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            printf("enter two numbers \n");
            scanf("%d %d", &a,&b);
            c = a+ b;
            printf("sum of two numbers %d",c );
            break;

            case 2:
            printf("enter two numbers \n");
            scanf("%d %d", &a, &b);
            c = a * b;
            printf("multiplication is %d \n", c);
            break;

            case 3:
            printf("enter two numbers \n");
            scanf("%d %d", &a, &b);
            c = a - b;
            printf("subtraction is %d \n", c);
            break;

            case 4:
            exit(0);
            break;

            default:
            printf("wrong choice enter");
        }

        printf("do u wish to contine y/n");
        scanf("%c",&ch);  or we can write ch = getch();
    }
    
    while(ch == 'y' || ch == 'n');
    getch();
}

