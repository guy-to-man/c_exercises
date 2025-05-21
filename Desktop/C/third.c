#include <stdio.h>

int main(){
    int counter_f=0;
    int counter_c=0;
    int array_f[]= {6,1,1,5,1,1,1};

    int helper=0;
    for(counter_f;counter_f<7;counter_f++){
        helper=0;
        while(helper<array_f[counter_f]){
            printf("#");
            helper++;
        }
        printf("\n");
    }
    for(counter_c;counter_c<10;counter_c++){
        if (counter_c == 0 || counter_c == 9){
            printf("  ###\n");
            }
        else if (counter_c == 1 || counter_c == 8){
            printf(" #   #\n");
            }
        else{
            printf("#\n");
            }
    }
    counter_f=0;
    counter_c=0;
    return(0);
}
