#include <stdio.h>
#include <stdlib.h>
float calcular_8va_parte (float oct, float num);
int main()
{
 float num,oct;
 printf("Ingrese un numero: ");
 scanf("%f",&num);
 oct=calcular_8va_parte(oct,num);
 printf("La octava parte de %.2f es: %.2f",num,oct);
 return 0;
}
float calcular_8va_parte(float oct, float num)
{
 oct=num/8;
 return oct;
}