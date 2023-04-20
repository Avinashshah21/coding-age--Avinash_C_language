/*
Wap to print diamond shape star pattern
            *
           * *
          * * *
           * *
            *  
*/
 #include<stdio.h>
 int main(){
    int num;
    printf("plz enter col no.\n");
    scanf("%d",&num);
    for(int i=num; i>0; i--)
    {
        for(int j=1;j<=num; j++)
        {
            if(j<i)
                {
                    printf(" ");
                }
                else{
                    printf("*");
                }
        }
        for(int k=num; k>0;k--){
            if(k>i){
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
 }       