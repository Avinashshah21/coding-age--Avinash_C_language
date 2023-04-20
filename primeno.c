#include <stdio.h>
int main(){
int a,b,i,j;
printf("enter the no.s");
scanf("%d%d",&a,&b);
    for ( i = a; i < b; i++)
    {
        int count=0;
       for ( j = 2; j < i; j++)
       {
        /* code */ i%j;
        if(i%j==0){

            count++;
           
        }
      if (count==0){

        printf("%d",i);
      }
      {
        /* code */
      }
      
       }
         printf("\n");
    }
    
    return 0;
}