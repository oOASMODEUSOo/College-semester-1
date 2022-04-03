#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fileptr;
    char ch;
    char fname[50];
    printf("Enter filename: ");
    gets(fname);
    fileptr = fopen(fname, "r");
    if (fileptr == NULL)
    {
        printf("File does not exist!", fname);
    }
    else
    {
        do
        {
            ch = fgetc(fileptr);
            printf("%c", ch);
        } while (ch != EOF);
    }
    fclose(fileptr);
    return 0;
}