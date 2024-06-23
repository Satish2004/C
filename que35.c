#include<stdio.h>

int calcPercentage(int science,int maths, int sanskrit);

int main(){

int science= 99;
int maths= 96;
int sanskrit= 99;
printf("percentage is: %d",calcPercentage(science,maths,sanskrit));


    return 0;

}


int calcPercentage( int science, int maths, int sanskrit)
{
    return((science+maths+sanskrit)/3);

}