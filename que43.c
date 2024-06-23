// WAP to entry three 3 subject marks of any 2 students using 2D arr

// _ _ _ | _ _ _


#include<stdio.h>
int main (){

    int mark[2][3];
     mark[0][0]=99;
    mark[0][1]=100;
    mark[0][2]=98;

    mark[1][0]=89;
    mark[1][1]=87;
    mark[1][2]=88;

    printf("%d\n",mark[0][0]);
    printf("%d\n",mark[0][1]);
    printf("%d\n",mark[0][2]);

    printf("%d\n",mark[1][0]);
    printf("%d\n",mark[1][1]);
    printf("%d\n",mark[1][2]);

    return 0;
}