#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num=='a'||num=='e'||num=='i'||num=='o'||num=='u' num=='A'|| num=='E'||num=='I'||num=='O'||num=='U'){
        printf("Vowel");
    }
    else if(num!='a'&&num!='e'&&num!='i'&&num!='o'&&num!='u'num!='A'&&num!='E'&&num!='I'&&num!='O'&&num!='U'){
        printf("Consonant");
    }
    else if(num>=0&&num<=9){
        printf("Digit");
    }
    else{
        printf("Character");
    }
    return 0;
}