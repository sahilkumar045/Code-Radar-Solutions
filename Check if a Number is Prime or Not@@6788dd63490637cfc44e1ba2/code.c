#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int isprime = 1;
    for(int i = 2; i*i<n; i++){
        if(n%i==0){
            isprime = 0;
        }
    }
    if(isprime==0){
        printf("NotPrime");
    }
    else{
        printf("Prime");
    }
    return 0;

}