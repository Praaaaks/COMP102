#include<stdio.h>
#include<string.h>

typedef struct{
    int roll;
    char name[20];
    float cgpa;
}STUDENT;

void swap(STUDENT *x, STUDENT *y){
    STUDENT temp;
    temp = *y;
    *y = *x;
    *x = temp;
}

void sort(STUDENT *a, int size){
    int i, j;

    for (i = 0; i < size - 1; i++){
        for (j = 0; j < size - i - 1; j++){
            if (strcmp(a[j].name, a[j+1].name)>0)
                swap(a+j, a+j+1);
        }
    }
}

int main(){
    STUDENT s[5];
	int i;

	for(i=0; i<5; i++){
        printf("For student %d:\n", i+1);
        printf("Roll no: ");
		scanf("%d", &(s+i)->roll);
        printf("Name: ");
        scanf("%s", (s+i)->name);
        printf("CGPA: ");
        scanf("%f", &(s+i)->cgpa);
    }

	sort(s, 5);

	printf("\nThe students in alphabetical order are: \n");
    printf("Roll No\tName\tCGPA\n");
	for(i=0; i<5; i++){
		printf("%d\t", s[i].roll);
        printf("%s\t", s[i].name);
        printf("%.2f\n", s[i].cgpa);
    }

	return 0;
}