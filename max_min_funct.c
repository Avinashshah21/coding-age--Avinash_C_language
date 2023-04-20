#include<stdio.h>
int max(int,int,int,int);
int min(int,int,int,int);




int main(){
int a,b,c,d;
printf("enter the no.s\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
  min(a,b,c,d);
  max(a,b,c,d);
  printf("%d is maximum\n", max(a,b,c,d));
  printf("%d is minimum", min(a,b,c,d));
  return 0;
}




int max(a,b,c,d){
    if(a>b && a>c && a>d){
        return a;
    }
    else if (b>c && b>d)
    {
        return b;
    }
    else if (c>d)
    {
        return c;
    }
    else {
        return d;
    }
    
}
int min(a,b,c,d){
    if(a<b && a<c && a<d){
        return a;
    }
    else if (b<c && b<d)
    {
        return b;
    }
    else if (c<d)
    {
        return c;
    }
    else {
        return d;
    }
    
}