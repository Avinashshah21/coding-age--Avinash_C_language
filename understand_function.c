#include<stdio.h>
int sum ( int,int);
int sub ( int,int);
int mul ( int,int);
int div ( int,int);
 int main(){
    int a=10;
    int b=4;
    
    sum(a,b);
   sub(a,b);
   mul(a,b);
   div(a,b);
 
   printf("%d\n%d\n%d\n%d",sum(a,b), sub(a,b),mul(a,b),div(a,b));
    return 0;
 }
    int sum(int x, int y){
        return x+y;
    }
    int sub(int x, int y){
        return x-y;
    }int mul(int x, int y){
        return x*y;
    }int div(int x, int y){
        return x/y;
    }

