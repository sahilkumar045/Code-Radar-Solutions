#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){ // for raw
        for(int j=n; j>i; j--){// for left space
            printf(" ");
        }
        for(int k=1; k<=i; k++){// for printing star and middle space
            printf("*"):
        }
        printf("\n");
    }
    return 0;
}