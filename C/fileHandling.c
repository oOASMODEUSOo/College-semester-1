#include<stdio.h>
#include<stdlib.h> 

int main(){
    FILE *fileptr;
    char fileName[50];
    char letter;

    printf("Enter the name of file: ");
    gets(fileName);

    fileptr = fopen(fileName, "w");
    if (fileptr == NULL)
        printf("File does not exist");

    else{
        do{
            scanf("%c", &letter);
            fputc(letter, fileptr);
        } while (letter != '$');
    }

    return 0;
}