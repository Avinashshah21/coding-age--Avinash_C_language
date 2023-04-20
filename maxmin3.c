#include<stdio.h>
int main(){
int num1, num2, num3;
printf("Input \n");
scanf("%d%d%d", &num1, &num2, &num3);
  
  //for minimum no.s
    if(num1<num2)
    {
        if(num1<num3)
        {
            printf("mim:%d",num1);
        }
        else{
            printf("min:%d",num3);
            
        }
    }
    else{
            if(num2<num3){
                            printf("min:%d",num2);

            }
            else{
                printf("min:%d",num3);
            }
    }
//for maximum
printf("\n");
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("max:%d",num1);
        }
        else{
            printf("max:%d",num3);
            
        }
    }
    else{
            if(num2>num3){
                            printf("max:%d",num2);

            }
            else{
                printf("max:%d",num3);
            }
    }
 
return 0;

}