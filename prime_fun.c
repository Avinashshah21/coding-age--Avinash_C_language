#include <stdio.h>
int num(int);

int main()
{
    int sum=0;
    int a;
    for (int i = 1; i <= 10; i++)
    {
        
        scanf("%d", &a);
        num(a);
        printf("%d\n", num(a));
        sum=sum+ num(a);
    }
    printf("Sum of even and oddd is:%d",sum); 
    return 0;
}

int num(int z)
{

    if (z % 2 == 0)
    {
        return 1;
    }
    else if (z % 2 != 0)
    {
        return 2;
    }
    else{
        int count=0;
        for(int i=2; i<z; i++){
                if(z%i==0){
                    count++;
                }

            }
            if (count==0){
                return 0;
            }
        }
    }
