#include<stdio.h>
int sum(int a, int b);

int main(){

    int a, b;
    printf("enter first number:");
    scanf("%d\n",&a);

    printf("enter second number:");
    scanf("%d\n",&b);

    int s= sum(a,b);
    printf("sum is %d\n",s);

    return 0;
}
int sum (int x, int y){
    return x+y;
}