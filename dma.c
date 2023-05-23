#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, n1, i, *a;
    printf("Enter size of array: ");
    scanf("%d", &n);

    a = (int *)calloc(n, sizeof(int));

    for(i=0; i<n; i++){
        printf("Enter an integer: ");
        scanf("%d", a+i);
    }
    for(i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
    printf("\nEnter new size of array: ");
    scanf("%d", &n1);
    a = (int *)realloc(a, n1*sizeof(int));

    for(i=n; i<n1; i++){
        printf("Enter an integer: ");
        scanf("%d", a+i);
    }
    for(i=0; i<n1; i++){
        printf("%d\t", *(a+i));
    }
    free(a);
}