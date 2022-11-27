https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int m,n;
    float a,b;
    scanf("%d%d",&m,&n);
    scanf("%f%f",&a,&b);
    printf("%d %d",m+n,m-n);
    float a1=a+b;
    float a2=a-b;
    printf("\n%0.1f %0.1f",a1,a2);
    return 0;
}
