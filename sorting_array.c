#include <stdio.h>
int main()
{
    int size;
    printf("plz enter array size\n");
    scanf("%d", &size);
    if (size > 0)
    {
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d",&arr[i]);
        }
        for( int i=0; i<size-1; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if(arr[j]<arr[i]|| arr[j]==arr[i])
                {
                    // swapping
                    int temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
        for( int i=0; i<size; i++)
        {
            printf("%d",arr[i]);
        }
    }
        else
        {
            printf("Invalid Input");
        }
    
    return 0;
}