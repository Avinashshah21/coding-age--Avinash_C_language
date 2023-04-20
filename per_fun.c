#include<stdio.h>
int marks(int ,float );

int main()
{
int fullmar;
float per;
printf("Enter full marks");
scanf("%d",&fullmar);
printf("\nenter percentage");
scanf("%f",&per);
    marks(fullmar,per);
    printf("\n Marks obtained is %d out of %d", marks(fullmar,per),fullmar);
    return 0;

}


int marks (int a, float b){

    int mar;
    mar=(b*a)/100;
    return mar;
}