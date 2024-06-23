#include<stdio.h>
void calculatePrice(float value);
int main(){          // f.c means function call
    float value= 100.0;
    calculatePrice(value);
    printf("value is: %f", value);

    return 0;

}

void calculatePrice(float value){
value= value+(0.18*value);
printf(" the final value is : %f\n",value);


return 0;
}