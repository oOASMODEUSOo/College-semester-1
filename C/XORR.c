//The outcome of a XOR operation is true if and only if one operand (but not both) is true. Write a program in 'C' which returns the outcome of an Exclusive OR operation performed on its two operands

#include <stdio.h> 

int ORgate(int first, int second);
int NANDgate(int first, int second);

int main(){
    int Op1, Op2;
    printf("Enter First operand (0 or 1): ");
    scanf("%d", &Op1);
    printf("Enter Second operand (0 or 1): ");
    scanf("%d", &Op2);

    int outputOR = ORgate(Op1, Op2); //OR gate performed
    int outputNAND = NANDgate(Op1, Op2); //NAND gate performed

    int finalXOR = outputNAND & outputOR;
    printf("XOR operation on %d and %d gives out %d", Op1, Op2, finalXOR);

    return 0;
}

int ORgate(int first, int second){
    int ofirst = ~first;
    int osecond = ~second;
    int outputOR = ~(ofirst&osecond);

    return outputOR;
}

int NANDgate(int first, int second){
    int outputNAND = ~(first&second);
    return outputNAND;
}