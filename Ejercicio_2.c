#include <stdio.h>
#include <stdlib.h>
float calcular_area (float alt, float ancho, float area);
float calcular_perimetro (float alt, float ancho, float perimetro);
int main ()
{
 float alt, ancho,area=0,perimetro=0;
 printf ("Ingrese el ancho y la altura de su rectangulo\n\n");
 printf("Ancho: ");
 scanf("%f", &ancho);
 printf ("Altura: ");
 scanf("%f", &alt);
 printf("\n");
 area= calcular_area (alt,ancho,area);
 printf("Area: %.1f",area);
 perimetro= calcular_perimetro (alt,ancho,perimetro);
 printf("\nPerimetro: %.1f",perimetro);
 return 0;
}
float calcular_area (float alt, float ancho, float area)
{
 area=alt*ancho;
 return area;
}
float calcular_perimetro (float alt, float ancho, float perimetro)
{
 perimetro= 2*alt+2*ancho;
 return perimetro;
}