#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int j;
    for(int i=1; i<=n; i++){
        for(j=1; j<=n; i--){
            printf("%c\n", '*');
        }
        printf("\n");
    }
    return 0;
}