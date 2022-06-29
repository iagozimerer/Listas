#include <stdio.h>
int main()
{
    int x,p,s,t,c;

    scanf("%d",&x);

    p=x/100;
    s=(x/10)-(p*10);
    t=x%10;
    c=(p+(s*3)+(t*5))%7;

    printf("O NOVO NUMERO E = %d\n",(x*10)+c);



    return(0);
}
