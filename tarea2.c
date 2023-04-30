#include <stdio.h>
#include <math.h>
int main()
{
    void cuadratica(float a, float b, float c);

	float a=0, b=0, c=0;
	printf("Ingresa los coeficientes de la ecuacion cuadratica \n");
	printf("Valor de a: ");
	scanf("%f",&a);
	printf("Valor de b: ");
	scanf("%f",&b);
	printf("Valor de c: ");
	scanf("%f",&c);
	cuadratica(a, b, c);
	return 0;
}
void cuadratica(float a, float b, float c)
{   
	float x1=0, x2=0;
    //(((-b)+-(sqrt((b**2) -(4ac))))/ 2a)

    if((pow(b ,2 ) - 4 * a * c ) < 0){
        printf("No existen soluciones reales. \n");
        
    }else{
        x1 = (((-b)+(sqrt(pow(b , 2) - (4*(a*c)))))/ (2*a));
	    x2 = (((-b)-(sqrt(pow(b, 2) -(4*(a * c)))))/ (2*a));
        printf("El valor de x1 es: %f \n", x1);
	    printf("El valor de x2 es: %f \n", x2);
    }

}