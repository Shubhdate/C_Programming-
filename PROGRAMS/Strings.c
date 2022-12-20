// #strings
string is set of characters written in ""
#include<stdio.h>
#include<conio.h>
void main(){
    system("cls"); //used for clrearing screen
    char name = "A";
    printf("%c",name);
    getch();
}

here name is also called as ascii code eg for A - 63 and a - 97


Q wap to print string
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i,n;
    char name[5] = {'A','B','C'};
    char address[50] = "Hello World";

    for(i =0;i <= n - 1; i++){
        printf("%c", address[i]);
    }
    getch();
}
output will be - Hello World

#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i,n;
    char name[5] = {'A','B','C'};
    char address[50] = "Hello World";

    for(i =0;i <= n - 1; i++){
        printf("%c", name[i]);
    }
    getch();
}
output will be  - ABC

#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i,n;
    char name[5] = {'A','B','C'};
    char address[50] = "Hello World";
    printf("%s", name[i]);
    for(i =0; i <=n - 1; i++){
        printf("%c", name[i]);
    }
    getch();
}
output will be - ABCHELLO WORLD

Q wap to input string
#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i,n;
    char name[5] = {'A','B','C'};
    char address[50];
    printf(" eneter your address:");
    //gets();
    scanf("%s", address[i]); // we can not used multi word here
    printf("%s", address[i]);
    //puts(address);
    getch();
}

output will be - 
enter your address: Hello
Hello

to use multi word-
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    clrscr();
    int i,n;
    char name[5] = {'A','B','C'};
    char address[50];
    printf(" eneter your address:");
    //gets();
    scanf("%[^\n]", address[i]); // we can used multi word here
    //printf("%s", address[i]);
    //puts(address);
    getch();
}
output will be - 
enter your address: Hello world
Hello world


#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i,n;
    char name[5] = {'A','B','C'};
    char address[50];
    printf(" eneter your address:");
    gets(address);
    //scanf("%s", address[i]); // we can not used multi word here
    //printf("%s", address[i]);
    puts(address);
    getch();
}
output will be - 
enter your address: Hello world
Hello world


#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i,n;
    char address[50];
    printf(" eneter your address:");
    gets(address);
    for(i =0; address[i]; i++){
        printf("%c", address[i]);
    }

    //for(i =0; address[i]!='\0'; i++){
    //     printf("%c", address[i]);
    // }
    getch();
}
output will be - 
enter your address: Hello world
Hello world



// strings predefined function -
strlen() - used to find string length
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    clrscr();
    int i,n;
    char FirstName[50] = "SHUBHAM";
    char LastName[50] = "date";
    printf("%d", strlen(FirstName));
    printf("%d", strlen(LastName));
    getch();
}


strcpy() - copy one string to other string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    clrscr();
    int i,n;
    char FirstName[50] = "SHUBHAM";
    char LastName[50] = "date";
    char middleName[50];
    strcpy(middleName, "pandurang");
    puts(middleName);
    getch();
}


strcat() -  used to merge two string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    clrscr();
    int i,n;
    char FirstName[50] = "SHUBHAM";
    char LastName[50] = "date";
    puts(strcat(FirstName, LastName));
    getch();
}


strcmp() - used to compare two string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    clrscr();
    int i,n;
    char FirstName[50] = "SHUBHAM";
    char LastName[50] = "date";
    if(!strcmp(FirstName, LastName)){
        printf("strings are equal");
    }
    else{
        printf("strings are not equal");
    }
    getch();
}


strrev() - used to reverse string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    clrscr();
    int i,n;
    char FirstName[50] = "SHUBHAM";
    char LastName[50] = "date";
    puts(strrev(FirstName));
    getch();
}


strlwr() - convet string to lower characters
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    clrscr();
    int i,n;
    char FirstName[50] = "SHUBHAM";
    char LastName[50] = "date";
    puts(strlwr(FirstName));
    getch();
}


strupr() - convert string to upper characters
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    clrscr();
    int i,n;
    char FirstName[50] = "SHUBHAM";
    char LastName[50] = "date";
    puts(strupr(LastName));
    getch();
}


strstr() - used for getting substring or some char of strings
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    clrscr();
    int i,n;
    char FirstName[50] = "SHUBHAM";
    char LastName[50] = "date";
    puts(strstr(FirstName,"SH"));
    getch();
}



