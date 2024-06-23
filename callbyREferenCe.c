/*#include<stdio.h>

void square(int *n);

int main(){

int number=4;
square(&number);
printf("number is=%d\n",number);

    return 0;

}

void square(int *n){


    *n=(*n)*(*n);
    printf("square value is = %d\n",*n);
}*/



#include<stdio.h>
void square(int n);
int main(){

int number=4;
square(&number);
printf("number is=%d\n",number);

    return 0;
}

void square(int n){

    n=n*n;

    printf("square value:%d\n",n);
}