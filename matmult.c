#include<stdio.h>

void matin(int mat[][4],int m,int n){
    int i,j;
    printf("For a matrix,\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Enter element for row %d and coloumn %d: ",i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void matdisp(int mat[][4], int m, int n){
    int i,j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}

void matmult(int a[][4], int b[][4], int r1, int c1, int r2, int c2){
    int mul[4][4],i,j,k,sum;
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            sum=0;
            for(k=0; k<r2; k++){
                sum+=a[i][k]*b[k][j];
            }
            mul[i][j]=sum;
        }
    }
    matdisp(mul,r1,c2);
}

int main(){
    int a[4][4], b[4][4];
    matin(a,3,2);
    matin(b,2,4);
    matmult(a,b,3,2,2,4);
    return 0;
}