#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your  x co ordination point\n");
    scanf("%d",&a);

    printf("Enter your  y co ordination point\n");
    scanf("%d",&b);
    if(a>0 || b>0){
        if(a<0 && b>0){
            printf("you lie in 2nd quadrant");
        }
        else if (a>0&&b<0){
            printf("you lie in 4th quadrant");
        }
        else{
            printf("you lie in 1st quadrant");
        }
        
        
        
    }
    else{
            printf("you lie in 3rd quadrant");
    }
   
    return 0;
}