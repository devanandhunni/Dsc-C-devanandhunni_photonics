#include <stdio.h>
void main()
{
    int u,a,t,d;
    printf("initial speed of vehicle: ");
    scanf("%d",&u);
    printf("time taken by vehicle: ");
    scanf("%d",&t);
    printf("acceleration of vehicle:");
    scanf("%d",&a);
    d=(u*t) + (0.5*a*t*t);
    printf("distance travelled by vehicle = %d",d);
}