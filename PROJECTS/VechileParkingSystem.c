// # VECHILE PARKING SYSTEM
for that we want types of vechile bus, cycle, riskshaw,
so if vechicle comes then one entry or goes out that enrty  will be deleted
also we are going to use status 
amount for paying parking


#include<stdio.h>
#include<conio.h>

int NumberRickshaw = 0, NumberBus = 0, NumberCycle = 0;
int amount = 0;
int count = 0;

int Menu();
void Bus();
void Rickshaw();
void Cycle();
void deleteData();
void showData();


void main(){
    while(1){
        clrscr();
        switch(Menu())
        {
            case 1:
            Cycle()
            break;

            case 2:
            Rickshaw();
            break;

            case 3:
            Bus();
            break;

            case 4:
            showData();
            break;

            case 5:
            deleteData();
            break;

            case 6:
            exit(0);

            default:
            printf("Invalid choice");
        }
        getch();
    }
}


int Menu(){
    int ch;
    printf("---Menu---");
    printf("enter the cycle \n");
    printf("enter the rickshaw \n ");
    printf("enter the bus \n");
    printf("status \n");
    printf("delete data \n");
    printf("Enter your choice \n");
    printf("exit \n")
    scanf("%d", &ch);
    return(ch);
}

void showData(){
    // will print the data
    printf("number of bus %d \n", NumberBus);
    printf("Number of rickshaw %d \n", NumberRickshaw);
    printf("number of cycle %d \n", NumberCycle);
    printf("Total Number of vechiles %d \n", count);
    printf("Total amount gain %d \n", amount);
}

void deleteData(){
    NumberCycle = 0;
    NumberRickshaw = 0;
    NumberBus = 0;
    amount = 0;
    count = 0;
}


void Rickshaw(){
    printf("entry successful");
    NumberRickshaw++;
    amount = amount + 50;
    count++;
}


void Bus(){
    printf("entry successful");
    NumberBus++;
    amount = amount + 100;
    count++;
}


void Cycle(){
    printf("entry successful");
    NumberCycle++;
    amount = amount + 20;
    count++;
}
