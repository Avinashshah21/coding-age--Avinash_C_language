#include<stdio.h>
int display(int);

int main(){

int a;
printf("Enter the num\n");
scanf("%d",&a);
display(a);
    return 0;
}

int display(int num){                       
    if(num==1)
        return 1;
        else{
   // printf("%d\n",num);
    display(num-1);
    printf("%d\n",num);
        }
}