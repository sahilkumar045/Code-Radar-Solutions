#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num=='a'||num=='e'||num=='i'||num=='o'||num=='u'){
        printf("Vowel");
    }
    else if(num!='a'&&num!='e'&&num!='i'&&num!='o'&&num!='u'){
        printf("Consonant");
    }
    else if(num>=0&&num<=9){
        printf("Digit");
    }
    else{
        printf("Character");
    }
}