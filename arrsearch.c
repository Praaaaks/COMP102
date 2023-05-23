#include<stdio.h>

int a[5]={12,3,6,88,45};

void search(int n, int x){
    if(x==a[n]) printf("It is element no. %d",n+1);
    else {
        n++;
        if(n<5) search(n,x);
        else printf("The element is not in the array.");
    }
}

int main(){
    int x,n=0;
    printf("Enter an element to search: ");
    scanf("%d",&x);
    search(n,x);
    return 0;
}