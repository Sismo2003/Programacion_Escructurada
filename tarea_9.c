#include <stdio.h>

struct figura
{
    int lados;
    float area;
    float perimetro;
    char nombre[50];
};
struct terreno{
    struct figura f;
    float precio;
    char localizacion[100];
};
struct clavo
{
    float tamanio;
    float precio;
    char tipo[20];
};

void agregar(struct figura *arr, int tam)
{
    //leer una figura
    struct figura f;


        //circulo

    //agregar al arreglo
    //ciclo
    arr[0].lados=f.lados;
    arr[0].area=f.area;
    arr[0].perimetro=f.perimetro;
    //arr[0].nombre=f.nombre;
}

int main(){
	struct figura a[10];
	int tamanio=10;
	//menu
	//agregar
	agregar(a, tamanio);
    return 0;
}
