#include<stdio.h>
 int fact(int);

 int main(){
    int num;
    printf("enter a no.\n");
    scanf("%d",&num);
    fact(num);
    printf("factorial of %d is %d ",num, fact(num));
    return 0;
 }

 int fact (int a){

    int i=1;
    int x=1;
    while(i<=a){
        x=x*i;
        i++;
    }
    return x;
 }