#include <stdio.h>
#include <stdlib.h>
void identificar_mayor( float num1, float num2);
int main()
{
 float num1,num2;
 printf("Ingrese dos numeros\n");
 scanf("%f",&num1);
 scanf("%f",&num2);
 identificar_mayor(num1,num2);
 return 0;
}
void identificar_mayor( float num1, float num2)
{
 if (num1==num2)
 {
 printf("\nAmbos numeros son iguales");
 }
 else
 {
 if (num1>num2)
 {
 printf("\n%.1f es mayor que %.1f",num1,num2);
 }
 else
{
 printf("\n%.1f es mayor que %.1f",num2,num1);
 }
 }
}