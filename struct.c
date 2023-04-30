#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


#define enl printf("\n")
#define gett printf("---> ")
#define fore(i,n) for(int i = 0 ; i != n ; ++i)

void cls() {
    system("clear");
}
void delay(int ns)
{
    int ms = 1000 * ns;
    clock_t start_time = clock();
    while (clock() < start_time + ms);
}
struct figura{

    char nombre[50];
    int lados;
    float area;
    float perimetro;

};

struct figura arr[10];
int main(){
    int size = 10,choice = 0;
    int menu();
    void add(struct figura *arr, int tam);
    void search(struct figura *arr, int tam);
    cls();
    menu();
    return 0;
}


int menu(){
    int size = 10, choice = 0, x = 0;
    printf("----Bienvenido al Struct para figuras----");enl;
    printf("Precione la opcion indicada");enl;
    printf("1.Agregar un Figuras. ");enl;
    printf("2.Busqueda de Figuras.");enl;
    printf("3. PROXIMAMENTE");enl;  
    printf("4.Salida del Programa.");enl;
    gett;
    scanf("%d",&x);
    switch (x){
    case (1):
        printf("Redigiendo...");enl;
        delay(1000);
        cls();
        add(arr, size);
        return 0;
    
    case (2):
        printf("Redigiendo...");enl;
        delay(1000);
        cls();
        search(arr,size);
        return 0;
    case(4):
        printf("EXIT....");enl;
        printf("Gracias por escojernos :)");enl;
        printf("Grupo frontera agradece tu preferencia.");enl; 
        delay(1300);
        enl;
        return 0;
    default:
        cls();
        printf("INVALID OPTION");enl;
        printf("No soy adivino, DIGITA ALGO BIEN!");
       return 0;
    }
    main();
}

void search(struct figura *arr, int tam){
    int n = 0 ;
    printf("Ingrese cuantos elementos desea consultar: ");
    scanf("%d",&n);
    enl;
    delay(500);
    fore(i,n){
        int x = 0, index = 0;
        printf("Como desea consultar el elemento?");enl;
        printf("1.Busqueda por Nombre.");enl;
        printf("2.Busqueda por Lados.");enl;
        printf("3.Busqueda por Area.");enl;
        printf("4.Busqueda por Perimetro.");enl;
        gett;
        scanf("%d", &x);
        char bus[10];
        float search;
        cls();
        switch (x){
            case(1):
                printf("Ingrese el Nombre de la figura que deseas buscar.");enl;
                gett;
                scanf("%s", bus);
                for(int i = 0 ; bus[i] != '\0'; ++i){
                    bus[i]= toupper(bus[i]);
                }
                for(int j = 0 ; j != tam ; ++j){
                    if(bus[0] == arr[i].nombre[0]){
                        index = i;//laol
                        break;
                    }
                }
                printf("Nombre de la figura: %s.", arr[index].nombre);enl;
                printf("Lados de la figura: %d.",arr[index].lados);enl;
                printf("Area de la figura: %.2f.", arr[index].area );enl;
                printf("Perimetro de la figura %.2f.", arr[index].perimetro);enl;
                delay(2000);
                enl;
                printf("Gracias por escojernos :)");enl;
                printf("Grupo frontera agradece tu preferencia.");enl;  
                delay(400);
                printf("Regresando al menu...");enl;
                delay(1000);
                break;
            case(2):
                printf("Ingrese los Lados de la figura que deseas buscar");enl;
                gett;
                scanf("%f", search);
                fore(i,tam){
                    if(search == arr[i].lados){
                        index = i;
                        break;
                    }
                }
                printf("Nombre de la figura: %s.", arr[index].nombre);enl;
                printf("Lados de la figura: %d.",arr[index].lados);enl;
                printf("Area de la figura: %.2f.", arr[index].area );enl;
                printf("Perimetro de la figura %.2f.", arr[index].perimetro);enl;
                enl;
                delay(2000);
                printf("Gracias por escojernos :)");enl;
                printf("Grupo frontera agradece tu preferencia.");enl;  
                delay(400);
                printf("Regresando al menu...");enl;
                delay(1000);
                break;
            case(3):
                printf("Ingrese la Area de la figura que deseas buscar.");enl;
                gett;
                scanf("%f", search);
                                printf("Ingrese los Lados de la figura que deseas buscar.");enl;
                gett;
                scanf("%f", search);
                fore(i,tam){
                    if(search == arr[i].area){
                        index = i;
                        break;
                    }
                }
                printf("Nombre de la figura: %s.", arr[index].nombre);enl;
                printf("Lados de la figura: %d.",arr[index].lados);enl;
                printf("Area de la figura: %.2f.", arr[index].area );enl;
                printf("Perimetro de la figura %.2f.", arr[index].perimetro);enl;
                enl;
                delay(2000);
                printf("Gracias por escojernos :)");enl;
                printf("Grupo frontera agradece tu preferencia.");enl;  
                delay(400);
                printf("Regresando al menu...");enl;
                delay(1000);
                break;
            case (4):
                printf("Ingrese el Perimetro de la figura que deseas buscar.");enl;
                gett;
                scanf("%f", search);
                                printf("Ingrese los Lados de la figura que deseas buscar.");enl;
                gett;
                scanf("%f", search);
                fore(i,tam){
                    if(search == arr[i].perimetro){
                        index = i;
                        break;
                    }
                }
                printf("Nombre de la figura: %s.", arr[index].nombre);enl;
                printf("Lados de la figura: %d.",arr[index].lados);enl;
                printf("Area de la figura: %.2f.", arr[index].area );enl;
                printf("Perimetro de la figura %.2f.", arr[index].perimetro);enl;
                enl;
                delay(2000);
                printf("Gracias por escojernos :)");enl;
                printf("Grupo frontera agradece tu preferencia.");enl;  
                delay(400);
                printf("Regresando al menu...");enl;
                delay(1000);
                break;
                break;
            default:    
                enl;
                break;
        }
    }
    menu();
}


void add (struct figura *arr, int tam){
    int n = 0;
    printf("Cuantas figuras deseas agregar: ");
    scanf("%d",&n);
    fore(i,n){
        printf("ingrese el nombre de la figura:");enl;
        gett;
        scanf("%s",arr[i].nombre);
        for(int j = 0 ; arr[i].nombre[j] != '\0'; ++j){
            arr[i].nombre[j] = toupper(arr[i].nombre[j]);
        }
        delay(1000);
        // LADOS DE LA FIGURA
        printf("Ingrese los lados del la figura %s:", arr[i].nombre);enl;
        gett;
        scanf("%d", &arr[i].lados);
        delay(1000);
        //Area de la figura
        printf("Ingrese el area de la figura %s:", arr[i].nombre);enl;
        gett;
        scanf("%f",&arr[i].area);
        delay(1000);
        //Perimetro de la figura
        printf("Ingrese el Perimetro de la figura %s:", arr[i].nombre);enl;
        gett;
        scanf("%f",&arr[i].perimetro);
        delay(2000);
        enl;
    }
    cls();
    menu();
}
