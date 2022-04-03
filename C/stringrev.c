// User has given a random size string to input, you have to calculate the length of the string using pointer. You cannot use predefined function strrev.

#include<stdio.h>
 
int string_ln(char*);

void stringRev(int len, char str[]){
    for (int j = len; j >= 0; j--){   
        printf("%c", str[j]);
    }
    printf("\n");
}
 
void main() {
    char str[50];
    int length;
   
    printf("\nEnter any string : ");
    gets(str);
    length = string_ln(str);
    stringRev(length, str);

    printf("The length of the given string %s is : %d", str, length);
    getch();
}   
 
int string_ln(char*p) /* p=&str[0] */{
    int count = 0;
    while (*p != '\0') {
      count++;
      p++;
    }
    return count;
}