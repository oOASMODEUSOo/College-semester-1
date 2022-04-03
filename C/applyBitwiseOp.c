#include <stdio.h> 
 
int bitwiseOperator(int n, int op, int opp);

int main(){
    int choiceNumber, op1, op2;
    printf("Enter your first operand: ");
    scanf("%d", &op1);
    printf("Enter your second operand: ");
    scanf("%d", &op2);
    printf("option 1) bitwise AND\noption 2) bitwise OR\noption 3) bitwise XOR\noption 4) bitwise NOT\nEnter your choice: ");
    scanf("%d", &choiceNumber);

    bitwiseOperator(choiceNumber, op1, op2);

    return 0;

}

int bitwiseOperator(int n, int op, int opp){
    if (n == 1){
        printf("bitwise AND of %d and %d is %d", op, opp, op&opp);
    }

    else if (n==2){
        printf("bitwise OR of %d and %d is %d", op, opp, op|opp);
    }

    else if (n==3){
        printf("bitwise XOR of %d and %d is %d", op, opp, op^opp);
    }

    else if (n==4){
        printf("bitwise NOT of %d and %d is %d and %d", op, opp, ~op, ~opp);
    }
} 