#include <stdio.h>

int main(){
    char array[]={'X','M','L'};

    for(int helper=2;helper>-1;helper--){   //Crazy Work
        printf("%c\n",array[helper]);
        //printf("Value of the helper is: %d",helper);
    }
    return(0);
}
