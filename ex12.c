#include <stdio.h>
int main()
{
    float m,a,t;
    double v,e,tra;
    scanf("%f\n%f\n%f",&m,&a,&t);


    v=(a*t);
    e=(a*t*t)/2;
    tra=(m*1000*v*v)/2;








    printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n",v*3.6,e,tra);



    return(0);
}
