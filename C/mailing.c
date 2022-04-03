#include <stdio.h>
struct mail
{
    char name[20];
    char street[20];
    char city[50];
    char state[20];
    int zip;
};
struct mail list[100];
int point = -1;
void add_mailing()
{
    point++;
    printf("\nAdding mail address to list\n");
    printf("\nEnter the Name : ");
    scanf("%s", list[point].name);
    printf("\nEnter the Street : ");
    scanf("%s", list[point].street);
    printf("\nEnter the city : ");
    scanf("%s", list[point].city);
    printf("\nEnter the state : ");
    scanf("%s", list[point].state);
    printf("\nEnter the zip : ");
    scanf("%d", &list[point].zip);
}
void delete_mailing()
{
    if (point == -1)
    {
        printf("The list is Empty \n");
    }
    else
    {
        printf("The name of mail which is boing deleted\n");
        printf("%s", list[point].name);
        point--;
    }
}

int main()
{
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        int n;
        printf("\n Enter 1 to add mailing address");
        printf("\n Enter 2 to delete mailing address\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            add_mailing();
            break;
        case 2:
            delete_mailing();
            break;
        }
        printf("\nWant to continue more then press Y for yes and N for no \n");
        scanf("%c", &ch);
    }

    return 0;
}