#include<stdio.h>
int main(){
    int n;
    do
    {
    printf("enter the number:");
    scanf("%d",&n);
    printf("%d\n",n);

    } while (n%7==0);// number n totally multiply by 7 then this codition is applied
    
    printf("the program is end thank you do much");

    return 0;
    
}