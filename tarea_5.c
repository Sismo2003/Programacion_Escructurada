#include <stdio.h>

//progrma que convierte calcula el rendimiento de un automovil 

void kml (float gas, float km){ 
    float respuesta = km / gas;
    float aux = 0;
    printf("El rendimiento del carro segun los Km registrados y la cantida de gasolina es : %f litros por kilometros.", respuesta);
    printf("\nIngrese los 10 ultimos registros de Gasolina depositada al automovil\n");
    float gaso[10], rend [10];
    for(int i =0 ; i != 10 ; ++i){
        printf("ingrese la la gasolina depositada en litros: ");
        scanf ("%f",&aux);
        rend[i] = i / ( km / (aux + gas));
    }
    printf("\nIngrese los 10 ultimos registros de Gasolina depositada al automovil\n");
    for(int i = 1 ; i != 11 ; ++i){
        printf("El rendimiento segun la gasolina  en el tanque %d es de %f;\n ",i , rend[i]);

    }
}

int main (){
    float gas = 0 ,  km = 0;
    printf("Programa para calular el rendimiento de tu automovil :)\n");
    printf("Ingrese la cantidad total de gasolina en litros: ");
    scanf("%f",&gas);
    printf("Ingrese la cantidad de total de kilometros: ");
    scanf("%f",&km);
    kml(gas,km);

    return 0 ;
}