#include <stdio.h>
#include <math.h>
int main()
{
    float vp,al,ar;
    float ab;

    scanf("%f %f",&al,&ar);



    ab=(3*ar*ar*(sqrt(3)))/2;
    vp=(ab*al)/3;

    






    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n",vp);

    return(0);
}
