#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int isprime = 1;//Assuming the number is prime .
    for(int i = 2; i*i<=n; i++){
        if(n%i==0){
            isprime = 0;
            break;
        }
    }
    if(isprime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}