#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        i++;
        int j=1;
        while(j<=(n-i)){
            printf(" ");
            j++;
        }
        k=1;
        while(k<=(2 * i - 1)){
            printf("*");
            k++;
        }
    }
    printf("\n");
    return 0;

}
   
