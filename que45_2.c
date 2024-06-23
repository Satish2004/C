#include<stdio.h> // most important que fibonacci nmber store for the help of itteration (loop)

int main(){


    int n;
    printf("enter the n (n>2):");
    scanf("%d",&n);

    int fib[n];
    fib[0]=0;
    fib[1]=1;

    for(int i=2; i<n; i++){

        fib[i]= fib[i-1]+ fib[i-2];
        printf("%d\t",fib[i]);


    }

    printf("\n");
}