#include <stdio.h>

int money;
int x;

int main(){
    printf("money:");
    scanf("%d",&money);
    x=money/100;
    money=money%100;
    printf("Hundreds %d\n",x);
    x=money/50;
    money=money%50;
    printf("Fifties %d",x);


    return(0);

}
