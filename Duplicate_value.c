#include<stdio.h>
int main(){
int size;
printf("plz enter size of the array\n");
scanf("%d",&size);
int arr[size];
int count;

for(int i=0; i<size; i++)
{
    scanf("%d",&arr[i]);
}
    for(int i=0; i<size; i++)
    {
        count=0;
        for(int j=i+1; j<size; j++)
        {
              

            if(arr[i]==arr[j])
            {
                count=count+1;

            }
                // printf("%d\n",count);
            
        }
            if(count>0)
        {
            printf("%d is printed %d times\n",arr[i], count+1);
        }
        

    }
    

    return 0;
}
