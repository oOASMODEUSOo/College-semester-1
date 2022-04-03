#include<stdio.h>
int main()
{
    int marks[3][30];
    int n,m;
    int arr[3];
    label1:
    printf("Enter the number of classes(<= 3):\n"); 
    scanf("%d",&m);
    if(m>3){
        printf("Please enter a value <= 3\n");
        goto label1;
    }
    for(int i=0;i<m;i++){
        label2:
        printf("Enter the number of students in class %d(<=30)\n",i+1);
        scanf("%d",&n);
        if(n>30){
        printf("Please enter a value <= 30\n");
        goto label2;
        }
        arr[i]=n;
        for(int j=0;j<n;j++){
            printf("Enter the marks of student %d\n",j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    printf("Marks Table:\n");
    for(int i=0; i<m; i++) {
        for(int j=0;j<arr[i];j++) {
            printf("%d ", marks[i][j]);
        }
    printf("\n");
    }        
    return 0;
}