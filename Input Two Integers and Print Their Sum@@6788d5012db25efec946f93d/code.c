#include<stdio.h>
int main(){
    int a , b;
    printf("Enter two integer:");
    scanf("%d", &a);
    scanf("%d", &b);
    int sum = a + b;
    printf("You entered: %d\n", sum);
    return 0;
}