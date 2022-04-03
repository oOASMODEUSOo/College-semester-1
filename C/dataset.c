#include <stdio.h>
struct Address
{
    char street_number[20];
    char city[50];
    char state[50];
    char district[50];
};
struct Details
{
    int Emp_age;
    char Emp_name[50];
    char Emp_degree[50];
    float Emp_exp;
    struct Address Emp_add;
};

int main()
{
    int n;
    printf("Enter the no of employees  : ");
    scanf("%d", &n);
    struct Details Emp_det[100];
    for (int i = 0; i < n; i++)
    {
        printf("\n Enter the age of employee %d :", i + 1);
        scanf("%d", &Emp_det[i].Emp_age);
        printf("\n Enter the name of employee %d :", i + 1);
        scanf("%s", Emp_det[i].Emp_name);
        printf("\n Enter the degree of employee %d :", i + 1);
        scanf("%s", Emp_det[i].Emp_degree);
        printf("\n Enter the expenses of employee %d :", i + 1);
        scanf("%f", &Emp_det[i].Emp_exp);
        printf("\n Enter the address of employee %d :", i + 1);
        printf("\nstreet : ");
        scanf("%s", Emp_det[i].Emp_add.street_number);
        printf("\nCity : ");
        scanf("%s", Emp_det[i].Emp_add.city);
        printf("\nDistrict : ");
        scanf("%s", Emp_det[i].Emp_add.district);
        printf("\nState : ");
        scanf("%s", Emp_det[i].Emp_add.state);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nThe details of employee :: %d", i+1);
        printf("\n \n Age of employee %d is %d\n", i + 1, Emp_det[i].Emp_age);
        printf("Name of employee %dis %s\n", i + 1, Emp_det[i].Emp_name);
        printf("Degree of employee %d : %s\n", i + 1, Emp_det[i].Emp_degree);
        printf("Expenses of employee %dis %f\n", i + 1, Emp_det[i].Emp_exp);
        printf("Street : %s", Emp_det[i].Emp_add.street_number);
        printf("\nCity : %s", Emp_det[i].Emp_add.city);
        printf("\nDistrict : %s", Emp_det[i].Emp_add.district);
        printf("\nState : %s\n", Emp_det[i].Emp_add.state);
        printf("Address of employee %d \n", i + 1);
    }

    return 0;
}