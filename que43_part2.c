// WAP a function to count the number of odd numbers in an array

#include<stdio.h>

countOdd(int arr[], int n);

int mian(){


    int arr[]={1,2,3,4,5,6,};
    print("%d", countOdd(arr,6));

    return 0;

}

countOdd(int arr[], int n){

    int count =0;
    for(int i=0; i<n ; i++) {
    
        if (arr[i] % 2 !=0)
        {
            count ++;
        }
}
    return count;
}
        
    
    
       