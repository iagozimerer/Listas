#include <stdio.h>
int main()
{
    int cem,c,d,u,x;

    scanf("%d",&x);

    cem=x/100;
    c=(x-(cem*100))/50;
    d=(x-(cem*100)-(50*c))/10;
    u=x-(cem*100)-(50*c)-(10*d);



    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n",cem,c,d,u);
    return(0);
}
