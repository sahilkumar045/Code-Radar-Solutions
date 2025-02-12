#include<stdio.h>
int main(){
    char ch;
    scanf("%d",&ch);
    switch(ch){
        case 'R':
            printf("Stop");
            break;
        case 'G':
            printf("Go");
            break;
        case YR':
            printf("Slow Down");
            break;
        default:
            printf("Invalid input");
    }
    return 0;
}