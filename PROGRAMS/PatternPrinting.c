#Pattern printing
Qwap to print 
*
**
***
****
*****
here solve by sepearting every star and with the helop of loop

#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i,j;
    for(j = 1; j<=5; j++){
        for(i=1; i <=j; i++){
            printf("* \n");
        }
    }
        
}

for 1 star - 
for(i=1;i<=1;i++){
    printf("* \n");
}
for 2 star - 
for(i=1;i<=2;i++){
    printf("* \n");
}
for 3 star - 
for(i=1;i<=3;i++){
    printf("* \n");
}
for 4 star - 
for(i=1;i<=4;i++){
    printf("* \n");
}
for 5 star - 
for(i=1;i<=5;i++){
    printf("* \n");
}

Q wap to print
*****
****
***
**
*

#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i,j;
    for(j = 1; j<=5; j--){
        for(i=1; i <=j; i++){
            printf("* \n");
        }
    }
}
here j-- will be only change cause we have to decrease it


Q.wap to print
1
12
123
1234
12345

#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i,j;
    for(j = 1; j<=5; j++){
        for(i=1; i <=j; i++){
            printf("%d \n");
        }
    }
        
}

Q.wap to print
12345
1234
123
12
1

#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int i,j;
    for(j = 1; j<=5; j--){
        for(i=1; i <=j; i++){
            printf("%d \n");
        }
    }
        
}
