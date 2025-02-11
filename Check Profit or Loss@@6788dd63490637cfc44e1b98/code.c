#include<stdio.h>
int main(){
    int costprice,sellingprice;
    scanf("%d %d",&costprice,&sellingprice);
    if(sellingprice>costprice){
        printf("Profit");
    }
    else{
        printf("Loss");
    }
    return 0;
}