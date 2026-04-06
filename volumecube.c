#include <stdio.h>
void main()
{
    int l,b,h,vol;
    printf("length:\nbreadth:\nheight:\n");
    scanf("%d%d%d",&l,&b,&h);
    vol=l*b*h;
    printf("volume of cube is %d",vol);
}