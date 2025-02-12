#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'A':
            Printf("Excellent\n");
            break;
        case 'B':
            Printf("Good\n");
            break;
        case 'C':
            Printf("Average\n");
            break;
        case 'D':
            Printf("Below Average\n");
            break;
        case 'E':
            Printf("Fail\n");
            break;
        default:
            Printf("Invalid grade\n");
            break;
        return 0;
    }
}