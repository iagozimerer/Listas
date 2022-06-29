#include <stdio.h>
int main()
{
    double sm,h,v;
    scanf("%lf\n%lf",&sm,&h); // Entrada do Salário mínimo e do gasto de energia
    v=h*sm*0.007;             // Calcula o valor de 1kW
    printf("Custo por kW: R$ %.2f\nCusto do consumo: R$ %.2f\nCusto com desconto: R$ %.2f\n",sm*0.007,v,v*0.9);


    return(0);

}
