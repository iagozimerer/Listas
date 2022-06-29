#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    float x,t;
    scanf("%f\n%f\n%f",&a,&b,&c);

    t=(a+b+c)/2;
    x=sqrt(t*(t-a)*(t-b)*(t-c));


    printf("A AREA DO TRIANGULO E = %.2f\n",x);
    return(0);

}
