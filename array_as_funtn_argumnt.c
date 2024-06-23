#include<stdio.h>


    void printNumbers(int arr[],int n); // function decleration

    int main(){
int arr[]= {1,2,3,4,5,6,7,8};
printNumbers(arr,8);  //function call
return 0;




    }
    void printNumbers(int arr[],int n){   //call by refrence
    for(int i=0;  i<n; i++){
        printf("%d\t",arr[i]);




    }
printf("\n");
    }

