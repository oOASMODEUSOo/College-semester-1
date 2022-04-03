//testing purposes

#include <stdio.h>
int *queue;
int size = 0;
int start = 0;
int front = 0;
void insertinqueue(int value)
{
    if (size == 0)
    {
        size++;
        queue[start + 1] = value;
    }
    size++;
    queue[start + 1] = value;
    start++;
}
int deletion()
{
    if (size == 0)
    {
        printf("queue is empty");
        return -1;
    }
    size--;
    int value = queue[front + 1];
    front++;
    return value;
}
int main()
{
    char ch='y';
    while (ch== 'y'||'Y')
    {
        printf("1 to add and 2 to deltte\n");
        int choice;
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("enter queue");
            int queue;
            scanf("%d", &queue);
            insertinqueue(queue);
            printf("%d added to queue\n", queue);
        }
        else if (choice == 2)
        {
            if (size == 0)
            {
                deletion();
            }
            else
            {
                printf("%d removed from queue", deletion());
            }
        }
        printf("Do you want to continue more: Y for yes and N for no ");
        scanf("%c",&ch);

    }
    return 0;
}