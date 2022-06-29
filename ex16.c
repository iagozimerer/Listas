#include <stdio.h>

int main()
{
    int x,xi;
    int c,d,u;
    scanf("%d",&x);

    c=x/100;
    d=(x/10)-(c*10);
    u=x%10;

    xi=(u*100)+(d*10)+c;






    printf("%d\n",xi);




    return(0);
}
