// #Calculator

#include<stdio.h>
#include<conio.h>

int oldanswer = 0;
int result;

int menu(){
    int choice;

    printf("---Menu--- \n");
    printf("\n 1. addition");
    printf("\n 2. subtraction");
    printf("\n 3. multiplication");
    printf("\n 4. division");
    printf("\n 5. modulus");
    printf("\n 6. clear");
    printf("\n 7. exit");

    printf("\n enter your choice");
    fflush(stdin);
    scanf("%d", &choice);
    return(choice);
}

void add(){
    int a, b;
    if(oldanswer){
        printf("\n enter one number");
        scanf("%d", &a);
        result += a;
        printf("\n new result is %d", result);
    }
    else{
        printf("\n enter two numbers");
        scanf("%d %d", &a, &b);
        result = a + b;
        printf("new result is %d", result);
    }
    oldanswer = 1;
}

void sub(){
    int a, b;
    if(oldanswer){
        printf("\n enter one number");
        scanf("%d", &a);
        result -= a;
        printf("\n new result is %d", result);
    }
    else{
        printf("\n enter two numbers");
        scanf("%d %d", &a, &b);
        result = a - b;
        printf("new result is %d", result);
    }
    oldanswer = 1;
}

void mul(){
    int a, b;
    if(oldanswer){
        printf("\n enter one number");
        scanf("%d", &a);
        result *= a;
        printf("\n new result is %d", result);
    }
    else{
        printf("\n enter two numbers");
        scanf("%d %d", &a, &b);
        result = a * b;
        printf("new result is %d", result);
    }
    oldanswer = 1;
}

void div(){
    int a, b;
    if(oldanswer){
        printf("\n enter one number");
        scanf("%d", &a);
        result /= a;
        printf("\n new result is %d", result);
    }
    else{
        printf("\n enter two numbers");
        scanf("%d %d", &a, &b);
        result = a / b;
        printf("new result is %d", result);
    }
    oldanswer = 1;
}

void mod(){
    int a, b;
    if(oldanswer){
        printf("\n enter one number");
        scanf("%d", &a);
        result %= a;
        printf("\n new result is %d", result);
    }
    else{
        printf("\n enter two numbers");
        scanf("%d %d", &a, &b);
        result = a % b;
        printf("new result is %d", result);
    }
    oldanswer = 1;
}

void clear(){
    printf("\n old answer is clear");
    result = 0;
    oldanswer = 0;
}
void main(){
    while(1){
        clrscr();
        printf("old result = %d", result);
        switch(menu()){
            case 1: 
            add();
            oldanswer = 1;
            break;

            case 2: 
            sub();
            oldanswer = 1;
            break;

            case 3: 
            mul();
            oldanswer = 1;
            break;

            case 4: 
            div();
            oldanswer = 1;
            break;

            case 5: 
            mod();
            oldanswer = 1;
            break;

            case 6: 
            clear();
            break;

            case 7: exit(0);
            default:printf("invalid choice");
        }
        getch();
    }
}