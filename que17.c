#include<stdio.h>
int main(){
    /*for(int i=1; i<=5; i++){
        if( i==3  ) {
            break;
        }
        printf("%d\n",i);

    }
    printf("end");*/







/* (question 17):-keep taking numbers as input from user until user enters an odd numbers*/
    int n;
    do
    {
        printf("enter the number:");
        scanf("%d\n",&n);
        printf("%d\n",n);
        if (n%2 !=0)
        {
            break;
        }
        

    } while (1);
    printf("end the program");
    return 0;

}