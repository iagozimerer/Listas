#include <stdio.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2,d,aux;
    scanf("%f\n%f\n%f\n%f",&x1,&y1,&x2,&y2);
    aux=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    d=sqrt(aux);

    



    printf("A DISTANCIA ENTRE A e B = %.2f\n",d);

    return(0);
}
