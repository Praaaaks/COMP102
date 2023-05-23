#include<stdio.h>

void swap(int *x, int *y){
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}

void bubble_sort(int num[], int size){
    int i, j;

    for (i = 0; i < size - 1; i++){
        for (j = 0; j < size - i - 1; j++){
            if (num[j] > num[j + 1])
                swap(&num[j], &num[j + 1]);
        }
    }
}

int main(){
    int num[10], size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++)
        scanf("%d", &num[i]);

    bubble_sort(num, size);
    printf("The sorted array in ascending order is: ");
    for(int i=0; i<size; i++)
        printf("%d ", num[i]);

    return 0;
 }