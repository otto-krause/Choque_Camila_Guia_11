#include <stdio.h>
#include <stdlib.h>
float sumar_resistencias (int c,float sum,float num);
void mostrar_proceso(float num, float sum,int k);
int main()
{
 int c,k,i;
 float sum,num;
 printf("Ingrese los valores de sus 5 resistencias: \n");
 sum=sumar_resistencias (c,sum,num);
printf("\n\nRESISTENCIA TOTAL: %.2f\n\n",sum);
 printf("PROCEDIMIENTO: \n");
 mostrar_proceso(num,sum,k);
}
float sumar_resistencias (int c,float sum,float num)
{
 sum=0;
 for (c=1;c<=5;c++)
 {
 printf("Resistencia %d: ",c);
 scanf ("%f",&num);
 sum=sum+num;
 }
 return sum;
}
void mostrar_proceso(float num, float sum, int k)
{
 printf("RT= ");
 for (k=1;k<=5;k++)
 {
 printf("R%d",k);
 if (k!=5)
 {
 printf(" + ");
 }
 }
}