#include <stdio.h>

int a;
int b;
int O;
int P;

int main(){

    printf("Enter the height of the rectangle\n");
    scanf("%d",&a);
    printf("Enter the width of the rectangle\n");
    scanf("%d",&b);
    O=2*(a+b);
    P=a*b;
    printf("The perimeter is %d and the area is %d",O,P);
}
