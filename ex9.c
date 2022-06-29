#include <stdio.h>
int main()
{

    float s,x,nn;
    int z;

    scanf("%f",&x);


    s=x;
    s=(s+0.05)*10;
    z=s;
    s=z;
    nn=s/10;

    printf("%.6f\n",nn);

    s=x;
    s=(s+0.005)*100;
    z=s;
    s=z;
    nn=s/100;

    printf("%.6f\n",nn);

    s=x;
    s=(s+0.0005)*1000;
    z=s;
    s=z;
    nn=s/1000;

    printf("%.6f\n",nn);




    return(0);
}
