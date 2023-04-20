/*Write a program that accepts sets of three numbers, and prints the second-maximum number among the three.*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int num;
	scanf("%d",&num);               //for termination of loop
	for(int i=0; i<num; i++)
	{
	    int num1,num2,num3;
	    scanf("%d%d%d",&num1,&num2,&num3);
	    if(num1<num2 && num1>num3){
	        printf("%d\n",num1);
	    }
	    else if (num2<num3){
	         printf("%d\n",num2);
	    }
	    else
	    printf("%d\n",num3);
	}
	return 0;
}

