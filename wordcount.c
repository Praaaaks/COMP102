#include<stdio.h>
#include<string.h>

void main(){
    char sentence[20], word[10], rev[10];
    int ccount=0, wcount=0;
    printf("Enter a sentence: ");
    gets(sentence);

    for(int i=0; sentence[i]!='\0'; i++){
        if(sentence[i]!= ' ') 
            ccount++;
        else
            wcount++;
    }

    printf("The sentecnce has %d words and %d characters.\n", wcount+1, ccount);

    printf("Enter a word: ");
    gets(word);

    for(int i=0; i<strlen(word); i++){
        rev[i] = word[strlen(word)-i-1];
    }
    printf("%s\n", rev);
    if(strcmp(rev, word) == 0)
        printf("Palindrome.");
    else
        printf("Not palindrome.");
}