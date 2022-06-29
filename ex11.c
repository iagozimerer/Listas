#include <stdio.h>
int main()
{

    float a,b,c,vc;

    scanf("%f\n%f\n%f",&a,&b,&c);
    vc=a+((a*b)/100)+((a*c)/100);


    printf("O VALOR DO CARRO E = %.2f\n",vc);
    return(0);
}
