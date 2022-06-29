#include <stdio.h>
#define pi 3.14159

int main()
{
    float r,a,vc;
    float a1,a2;
    scanf("%f\n%f",&r,&a);


    a1=2*pi*r*a;
    a2=pi*r*r;

    vc=((2*a2)+a1)*100;

    printf("O VALOR DO CUSTO E = %.2f\n",vc);












    return(0);
}
