#include<stdio.h>

void swap(int *a,int*b);

int main(){
                                                                    // this is posible only pointer(*)
int x=3,y=9;
swap(&x,&y);
printf("swapping of x=%d & swapping of y=%d\n",x,y);

    return 0;
}
//  call by reference--->
void swap(int *a,int*b){


    int temp=*a;
    *a=*b;
    *b=temp;


}