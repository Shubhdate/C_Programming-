// #Restaurent Billing System - 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//this is for to genertae the bills
void generateBillHeader(char name[100], char date[50]){
    printf("\n\n\n");
    printf("\t  Shubham Restaurant");
    printf("\n Date: %s", date);
    printf("\n invoice to: %s", name);
    printf("\n");

    printf("-----------------------------------------\n");
    printf("Ttems:\t\t");
    printf("Qty:\t\t");
    printf("Total:\t\t");

    printf("-----------------------------------------\n");
    printf("\n\n\n");
}

void genertaeBillBody(char item[30], int qty, float price){
    printf("%s\t\t",item);
    printf("%d \t\t", qty);
    printf("%0.2f \t\t", qty * price); 
    printf("\n\n\n");
}

void generateBillFooter(float total){
    printf("\n\n\n");
    float dish = 0.1 * total; //10% discount
    float netTotal = total - dish;
    float cgst = 0.1 * netTotal, grandTotal = netTotal + 2 * cgst;//netotoal + cgst + sgst

    printf("-----------------------------------------\n");
    printf("sub total\t\t\t %0.2f", total);
    printf("\n discount @10 %s \t\t\t %0.2f","/", dish);
    printf("\n\t\t\t\t----------");
    printf("\n net total \t\t\t %0.2f", netTotal);
    printf("\n cgst @9 %s \t\t\t %0.2f","/",cgst);
    printf("\n sgst @9 %s \t\t\t %0.2f","/",sgst);

    printf("-----------------------------------------\n");
    printf("\n grand Total \t\t\t %0.2f", grandTotal);
    printf("-----------------------------------------\n");

}

struct items{
    char item[30];
    float price;
    int qty;
};

struct orders{
    char customers[100];
    char date[50];
    int numOfItems;
    struct items itm[100];
};


int main(){
    int choice;
    int noItems;
    int i;
    struct orders ord;
    struct orders order;
    char saveBill = 'y';
    FILE *fp;
    char name[50];
    char continueFlag = 'y';

    //layout for bill

    while(continueFlag == 'y'){
        system("clr");
        float total = 0;
        int invoiceFound = 0;

        printf("\t----------Shubham Restuarent--------");
        printf("\n\n select your operation:");
        printf("\n\n 1.generate invoice");
        printf("\n 2.show all invoices");
        printf("\n 3. search invoices");
        printf("\n 4. exit");
        printf("\n\n\n");


        printf("\n\n your choice:");
        fflush(stdin);
        scanf("%d",&choice);
        fgetc(stdin);

        switch(choice){
            case 1:
                system("clr");
                printf("\n Name of the customers"); //to store this variable we have to make structures
                fgets(ord.customers,100,stdin);
                ord.customers[strlen(ord.customer) -1] = 0; //length of string - 1 it will sav new line also but we want to save only name so we have to write this
                strcpy(ord.date,__DATE__);

                printf("\nenter the number of items \t");
                scanf("%d", &noItems);
                ord.numberOfItems = noItems;

                for(int i = 0, i<n, i++){
                    fgetc(stdin);
                    printf("\n\n\n");
                    printf("\n enter the dish name oredered %d", i+1);
                    fgets(ord.itm[i].item, 30, stdin);
                    ord.itm[i].item[strlen(ord.itm[i].item) - 1] = 0;

                    printf("\nenter the quantity:\t");
                    scanf("%d", &ord.itm[i].qty);
                    printf("\n enter the unit price: \t");
                    scanf("%f", &ord.itm[i].price);

                    total += ord.itm[i].qty + ord.itm[i].price;
                }

                generateBillHeader(ord.customers, ord.date);
                
                
                for(i = 0; i<ord.numberOfItems; i++ ){
                    genertaeBillBody(ord.itm[i].item, ord.item[i].qty, ord.itm[i].price);
                }

                generateBillFooter(total);

                printf("\n do you want to save the bill: [y/n] \t");
                scanf("%s", &saveBill);
                if(saveBill == y){
                    fp = fopen("ReasturentAllBill.dat","a+");
                    fwrite(&ord, sizeof(struct orders), 1, fp);
                    if(fwrite =! 0){
                        printf("\n file is saved");
                    }
                    else{
                        printf("\nerror saving the file");
                    }
                    fclose(fp);
                }
            break;


            case 2:
                system("clr");
                fp = fopen("ReasturentAllBill.dat","r");
                printf("\n ****** Your Previous Bill ****** \n");
                while(fread(&order, sizeof(struct orders),1,fp)){
                    float tot = 0;
                    generateBillHeader(ord.customers, ord.date);

                    for(i = 0; i<ord.numberOfItems; i++ ){
                        genertaeBillBody(ord.itm[i].item, ord.item[i].qty, ord.itm[i].price);
                        tot += ord.itm[i].qty + ord.itm[i].price;
                    }
                    
                    generateBillFooter(tot);
                }
                fclose(fp);
            break;


            case 3:
                printf("\n enter the name of the customer: \t");
                // fgetc(stdin);
                fgets(name,50,stdin);
                name[strlen(name) - 1] = 0;
                system("clr");
                fp = fopen("ReasturentAllBill.dat","r");
                printf("\n ****** invoice of name %s ****** \n", name);
                while(fread(&order, sizeof(struct orders),1,fp)){
                    float tot = 0;

                    if(!strcmp(order.customer, name)){
                        generateBillHeader(ord.customers, ord.date);

                        for(i = 0; i<ord.numberOfItems; i++ ){
                            genertaeBillBody(ord.itm[i].item, ord.item[i].qty, ord.itm[i].price);
                            tot += ord.itm[i].qty + ord.itm[i].price;
                        }
                        
                        generateBillFooter(tot);
                        invoiceFound = 1;
                    }

                }
                if(!invoiceFound){
                    printf("\nsorry that name of %s customer not exist", name);
                }
                fclose(fp);
            break;


            case 4:
                printf("\n Thank you for the service ");
                exit(0);
                break;
                
            default:
            printf("invalid choices");
            break;



        }
        printf("\n do you want to perform another operation [y/n]");
        scanf("%s", &continueFlag);
    }

    printf("\n Thank you for the service ");
    printf("\n\n\n");
    return 0;

}