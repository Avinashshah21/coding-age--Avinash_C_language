#include<stdio.h>
int fact(int);
int main(){
int a;
scanf("%d",&a);
fact(a);
printf("%d",fact(a));
    return 0;
}

int fact(int num){

    if(num==0)
    return 1;
    else{
        return num*fact(num-1);
    }
}