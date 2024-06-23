#include<stdio.h>
// function protocol-->
void namaste();
 
void bonjour();



// function calll-->
int main (){
    printf("enter i for indian & f for french");
    char ch;
    scanf("%c",&ch);

    if (ch=='i')
    {
        namaste();

    }
    else{bonjour();
    }
    
    return 0;
    }
       void namaste(){
        printf("namaste\n");
       }
       void bonjour(){
        printf("bonjour\n");
       }
