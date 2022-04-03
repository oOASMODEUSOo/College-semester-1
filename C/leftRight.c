#include<stdio.h>

int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    int b = a>>1;
    int c = a<<1;
    printf("on left shifting the number: %d\n", c);
    printf("on right shifting the number: %d\n", b);
    
    int d = a/2;
    int e = a*2;
    printf("on doing normal division: %d\n", d);
    printf("on doing normal multiplication: %d", e);

    return 0;
}