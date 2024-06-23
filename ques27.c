#include<stdio.h>
// function protocol
void printHello();
void printGoodbye();



// function call
int main()
{
    printHello();
    printGoodbye();

    return 0;
}

// function definition

void printHello(){
    printf("Hello!\n");
}


void printGoodbye(){
    printf("Goodbye\n");
}