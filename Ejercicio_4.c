#include <stdio.h>
#include <stdlib.h>
float calcular_presion (float F, float S, float P);
int main()
{
 float F,S,Presion;
 printf("Ingrese los datos pedidos que establece su elemento\n");
 printf("FUERZA: ");
 scanf("%f",&F);
 printf("SUPERFICIE: ");
 scanf("%f",&S);
 Presion= calcular_presion(F,S,Presion);
 printf("\nLa presion que ejerce su elemento hacia la superficie es de: %.2f",Presion);
 printf(" Pascal\n");
 return 0;
}
float calcular_presion (float F, float S, float Presion)
{
 Presion=F/S;
 return Presion;
}