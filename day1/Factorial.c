//  Program to factorial of a given number
#include<stdio.h>
#include<stdlib.h>

int fac(int num){
    if(num==1)
        return 1;
    return num*fac(num-1);
}
int main(){
    int myNum;
    printf("Enter the number : ");
    scanf("%d",&myNum);
    printf("The factorial of %d is %d",myNum, fac(myNum));
    return 0;
}