// #2D arrays
horzional - rows
vertical - cloumns

q. wap to input 2 d array from the user of size 3 * 5 then display the matrix

#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    int A[3][5];
    int i, j;


    // for rows
    printf("eneter the elements \n");
    for(i = 0; i<=2; i++){
        for( j=0; j <=4; j++){
            scanf("%d", &A[i][j])
        }
        print(" \n");
    }

    // for columns
    printf("eneter the elements \n");
    for(i = 0; i<=2; i++){
        for( j=0; j <=4; j++){
            scanf("%d", &A[i][j])
        }
        print(" \n");
    }

}
here first row:
for(j = 0; j <=4; j++){
    scanf("%d", &A[0][j])
}

here second row:
for(j = 0; j <=4; j++){
    scanf("%d", &A[1][j])
}

here third row:
for(j = 0; j <=4; j++){
    scanf("%d", &A[2][j])
}

now coomon is:
for( j=0; j <=4; j++){
    scanf("%d", &A[i][j])
}

now making it all:
for(i = 0; i<=2; i++){
    for( j=0; j <=4; j++){
        scanf("%d", &A[i][j])
    }
    print(" \n");
}




Q wap to input 2 d array of 3 * 5 from the user
pass  2 d array to the function gabs()
the function gabs() will show the matrix

#include<stdio.h>
#include<conio.h>
void GABS(int [][], int  , int );

void main(){
    int A[3][5];

    printf("eneter the elements \n");
    for(i = 0; i<=2; i++){
        for( j=0; j <=4; j++){
            scanf("%d", &A[i][j])
        }
        print(" \n");
    }

}

void GABS(int B[][], int p , int q){
    int i , j;
    printf("matrix is \n");
    for(i = 0; i<= r - 1; i++){
        for( j = 0; j <= q - 1; j++){
            printf("%d \t", B[i][j]);
        }
        printf("\n");
    }
}






