#include <stdio.h>
#include <stdlib.h>
int ingresos (int numero_1, int numero_2);
int main()
{
 int numero_1=0,numero_2=0;
 printf("Ingrese dos numeros cualquiera:\n");
 scanf("%d",&numero_1);
 scanf("%d",&numero_2);
 printf("Los numeros ingresados son:");
 ingresos (numero_1,numero_2);
}
int ingresos(int numero_1, int numero_2)
{
 printf("\n%d\n%d",numero_1,numero_2);
 return 0;
}