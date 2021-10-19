#include <stdio.h>
#include <stdlib.h>
float postular_hombres (float porcentaje_1,int men, int woman);
float postular_mujeres (float porcentaje_2,int men, int woman);
int main()
{
 int men,woman;
 float porcentaje_1=0,porcentaje_2=0;
 printf ("Ingrese la cantidad de Hombres y mujeres postulados\n\n") ;
 printf("Hombres: ");
 scanf ("%d",&men);
 printf("Mujeres: ");
 scanf ("%d",&woman);
 porcentaje_1= postular_hombres(porcentaje_1,men,woman);
 printf ("\nEl porcentaje de Hombres postulados es: %.2f", porcentaje_1);
 printf(" por ciento",porcentaje_1);
 porcentaje_2= postular_mujeres (porcentaje_2,men,woman);
 printf ("\nEl porcentaje de Mujeres postuladas es: %.2f", porcentaje_2) ;
 printf(" por ciento",porcentaje_2);
 return 0;
}
float postular_hombres (float porcentaje_1,int men, int woman)
{
 porcentaje_1=men*100/(men+woman);
 return porcentaje_1;
}
float postular_mujeres (float porcentaje_2,int men, int woman)
{
 porcentaje_2=woman*100/(men+woman);
 return porcentaje_2;
}