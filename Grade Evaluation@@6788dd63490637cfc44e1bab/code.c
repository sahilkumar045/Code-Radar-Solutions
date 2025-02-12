#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'A':
            Printf("Excellent");
            break;
        case 'B':
            Printf("Good");
            break;
        case 'C':
            Printf("Average");
            break;
        case 'D':
            Printf("Below Average");
            break;
        case 'E':
            Printf("Fail");
            break;
        default:
            Printf("Invalid grade");
            break;
    }
}