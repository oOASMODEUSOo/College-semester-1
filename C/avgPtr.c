#include <stdio.h>

int main()
{
    int empNumber, avg = 0;
    int arr[100];
    printf("Enter the Number of employee : ");
    scanf("%d", &empNumber);
    
    for (int i = 0; i < empNumber; i++)
    {
        printf("\n Enter the age of employee  %d:  ", i + 1);
        scanf("%d", &arr[i]);
    }
    int *ptr;
    ptr = arr;
    for (int j = 0; j < empNumber; j++)
    {
        avg = avg + *ptr;
        ptr++;
    }
    printf("The Average of the age of the employees is %d  \n", avg / empNumber);
    return 0;
}