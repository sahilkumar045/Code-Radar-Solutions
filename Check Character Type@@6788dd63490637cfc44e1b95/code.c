#include <stdio.h>
#include <ctype.h>
void checkCharacter(char ch){
    char lower = tolower(ch);
    if((lower >= 'a' && lower <='z')){
        if(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u'){
            printf("Vowel\n");
        }else{
            printf("Consonant\n");
        }
    }
    else if(ch >= '0' && ch <='9'){
        printf("Digit\n");
    }else {
        printf("Special Character\n");
    }
}
int main(){
    char ch;
    scanf("%c",&ch);
    checkCharacter(ch);
    return 0;
}