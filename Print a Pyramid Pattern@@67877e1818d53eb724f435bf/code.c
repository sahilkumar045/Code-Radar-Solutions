#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){//for Rows.
        for(int j=1; j<=(n-i); j++){// for left side spaces.
            printf(" ");
        }
        for(int k=1; k<=(2 * i - 1); k++){//for printing stars.
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
    

