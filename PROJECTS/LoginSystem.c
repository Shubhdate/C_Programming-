// #Login System in C

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define ENTER 13 // ASCII VALUE FOR * IS 13
#define TAB 9
#define BACKSPACE 8

struct user{
    char fullName[50];
    char email[50];
    char password[50];
    char username[50];
    char phone[50];
};

void takeinput(char ch[50]){
    fgets(ch, 50, stdin);
    ch[strlen(ch) - 1] = 0; // this will remove /n line from the name input so that it will not take menmory
}

char generateUsername(char email[50], char username[50]){
    //eg abc@gmail.com
    for(i = 0; i< strlen(email); i++){
        if(email[i] == '@'){
            break;
        }
        else{
            username[i] = email[i];
        }
    }
}

void takepassword(char pwd[50]){
    int i;
    char ch;
    while(1){
        ch = getch();
        if(ch == ENTER || CH == TAB ){
            pwd[i] = '\0';
            break;
        }
        else if(ch == BACKSPACE){
            if(i > 0){
                i--;
                printf("\b \b");
            }
            else{
                pwd[i++] = ch;
                printf("* \b");
            }
        }
    }
}

int main(){
    int choice;
    struct user user;
    char password2[50];
    FILE *fp;
    int userFound = 0;

    system("color 0b");
    printf("\n\t\t\t\t ---------welcome to Authentication System--------");
    printf("\n please choose your operation");
    printf("\n 1.Signup");
    printf("\n 2.Login");
    printf("\n 3.Exit");

    printf("\n your choice");
    scanf("%d", &choice);
    fgetc(stdin); // same as /n will generate but we dont want that so we have to exclude that function

    switch(choice){
        case 1:
            printf("\n enter your full name:\t");
            takeinput(user.fullName);
            printf("\n enter your email: \t");
            takeinput(user.email);
            printf("\n enter your contact number:\t");
            takeinput(user.phone);
            printf("\n enter your password: \t");
            takepassword(user.password);
            //we wnat to use * instead of pasword showing

            printf("%s",user.password);
            printf("\nconfirm your password: \t");
            takepassword(password2);

            if(!strcmp(user.password, password2)){
                printf("\n your password matched");
                generateUsername(user.email,user.username);
                printf("\n your username is: %s",user.username);

                fp = open("Users.dat","a+");// a+ is used if the file is present then it will open and if not it will make a nwew file with that name
                fwrite(&user, sizeof(struct user),1, fp);
                if(fwrite != 0){
                    printf("\n\n User REgistration is successful, Your username is %s", user.username);
                }
                else{
                    printf("\n\n Something wrong");
                }

            }
            else{
                printf("\n\n password is wrong");
                Beep(750,300); //will make sound on wrong password
            }
            fclose(fp);
        break;


        case 2:
            char username[50];
            char pword[50];
            struct user usr;

            printf("\n\n enetr your username");
            takeinput(username);
            printf("\n\neter your password");
            takepassword("pword");

            system("cls");
            fp = fopen("Users.dat","r");
            while(fread(&usr, sizeof(struct user), 1, fp)){
                if(!strcmp(usr.username, username)){
                    if(!strcmp(usr.password, pword)){
                        printf("\n User Successfullg login");
                        printf("\n\t\t\t\t welcome %s", usr.fullName);
                        printf("\n\n| FullName: \t %s", usr.fullName);
                        printf("\n\n| Email: \t %s", usr.email);  
                        printf("\n\n| Contact Number: \t %s", usr.phone);                      
                    }
                    else{
                        printf("\n User not Successfullg login");
                        printf("\n Invalid Password");
                        Beep(750,300);
                    }
                    userFound = 1;
                }
            }
            if(!userFound){
                printf("\n\n User is Not registered");
                Beep(750,300);
            }
            fclose(fp);  //used for closing the file

        break;


        case 3:
            printf("\t\t Thank You For service");
            return 0;

    }


    return 0;
}