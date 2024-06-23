//<--- call by value , address are different



 /*#include<stdio.h>
void printAddress(int n);

int main(){

    int n=4;
  
    printf("%u\n",&n);
    printAddress(n);
return 0;
}
void printAddress(int n){

    printf("%u\n",&n);
}*/


/*OUTPUT LIKE 
0202020GF0
0202020GEB*/




// call by reference --> address are same;



/*#include<stdio.h>
void printAddress(int *n);
                                // where %p is %u is same 
int main(){

    int n=4;

    printAddress(&n);
    printf("%p\n",&n);

return 0;
}

void printAddress(int *n){
    printf("%p\n",n);
}
 
 
  OUTPUT LIKE 000000123
    000000123*/
