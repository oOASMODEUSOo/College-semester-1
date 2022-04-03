#include <stdio.h>

void rev(){
    char c;
    scanf("%c", &c);
    if (c != '\n'){
        rev();
        printf("%c", c);
    }
}

int main(){
    printf("Enter a sentence: ");
    rev();
    return 0;
}