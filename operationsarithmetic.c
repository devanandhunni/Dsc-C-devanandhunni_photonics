#include<stdio.h>
int main()
{
    int a,b,sum,sub,pd,div;
    a=6;
    b=3;
    sum=a+b;
    sub=a-b;
    pd=a*b;
    div=a/b;
    printf("sum of %d and %d is %d",a,b,sum);
    printf("\ndifference of %d and %d is %d",a,b,sub);
    printf("\nproduct of %d and %d is %d",a,b,pd);
    printf("\nquotient of %d and %d is %d",a,b,div);
}