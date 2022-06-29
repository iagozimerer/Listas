#include <stdio.h>
#include <math.h>
int main()
{
    int x,i;
    scanf("%d",&x);

    if(x<0 || x>=255)
    {
        printf("Numero invalido!\n");
        return(0);
    }
    else
    {
       
        for(i=7;i>=0;i--)
        {

            if(x>=pow(2,i))
            {
                printf("1");
                x=x-pow(2,i);
            }
            else
            {
                printf("0");
            }





        }

    }










    printf("\n");

    return(0);
}
