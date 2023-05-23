#include<stdio.h>

void matin(int (*a)[4],int m,int n){
    int i,j;
    printf("For a matrix,\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Enter element for row %d and coloumn %d: ",i+1,j+1);
            scanf("%d", *(a+i)+j);
        }
    }
}

void matdisp(int a[][4], int m, int n){
    int i,j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\t",&a[i][j]);
        }
        printf("\n");
    }
}

void matadd(int a[][4], int b[][4], int r1, int c1){
    int mat[4][4], i, j;
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            mat[i][j] = a[i][j] + b[i][j];

    matdisp(mat, r1, c1);
}

int main(){
    int a[4][4], b[4][4], row, col;

    printf("Enter no. of rows and column: ");
    scanf("%d, %d", &row, &col);

    matin(a, row, col);
    matin(b, row, col);
    matadd(a, b, row, col);
}