#include<stdio.h>
int main(){
    int a,b,c;
    double Average;
    scanf("%d %d %d",&a,&b,&c);
    Average = (a + b + c) / 3.0;
    printf("Average: %.2lf\n", Average);
    return 0;
}