// Program to print fibbonaci series up to nth term
#include<stdio.h>
#include<stdlib.h>
int fibbonaci(int num){
    int a=1,b=1,c=0;
    for(int i=0;i<num;i++){
        printf("%d ",b);
        c=a;
        a=b;
        b=a+c;
    }
}
int main(){
    int number;
    printf("Enter the number of term : ");
    scanf("%d",&number);
    printf("The Fibbonaci Series : ");
    fibbonaci(number);
    return 0;
}