#include <stdio.h>

int *busqueda_lineal(int arr[], int b)
{
    int aux=0;
    int pos[10];
    for(int i=0;i<10;i++)
    {
        if(b==arr[i])
        {
            printf("Entra al if\n");
            pos[aux]=i;
            printf("En el if %p\n", &pos[aux]);
            aux++;
        }
        printf("El valor de pos %p\n", pos);

    }
    return pos;
}
int busqueda_binaria(int arr[],int inicio, int fin, int b)
{
    int mitad;
    mitad=(inicio+fin)/2;
    if(inicio>fin)
        return -1;
    else if(arr[mitad]==b)
        return mitad;
    else if(arr[mitad]>b)
        busqueda_binaria(arr,inicio, mitad-1,b);
    else{
        busqueda_binaria(arr,mitad+1,fin,b);
    }


}
int *sort(int arr[]){
    for(int i = 0 ; i != 9; i++){
        for(int j = 1 ;j != 10 ; ++j){
            if(arr[i]>arr[j]){
                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
    return arr;
}
int main()
{
    int x[10]={3,2,6,3,35,667,12,54,5,76};
    int buscar;
    int p[10], buble[10];
    printf("Ingresa el valor  buscar \n");
    scanf("%i",&buscar);
    *buble = sort(x[10]);
    *p=busqueda_lineal(buble,buscar);
    printf("%p",p);
    for(int i=0;i<10;i++){
        printf("Los valores de p son %i\n",p[i]);

    }
    return 0;
}