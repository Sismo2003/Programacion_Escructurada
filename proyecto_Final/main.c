#include <stdio.h>
#include "structs.h"

void datashowall(){

}

void datashow(){

}

void sort(){

}
x
void edit(){

}

void search(){

}


void delete(){

}


int policytypedef (){
    printf("Selecione un tipo de poliza:");
    printf("1.Automotris\n 2.Vida\n 3.Negocios\n 4.Casa");
    int ans = 0;
    scanf("%d",&ans);
    return ans;
}
void add(struct policy *p, int *i,){
     
}


int menu (struct policy *po, int *it, type){
    printf("Bienvenido al sistema de polizas");
    printf("Escoja una opción:");
    printf("1.Agregar\n 2.Eliminar\n 3.Buscar\n 4.Editar\n 5.Mostar algun dato en especifico");
    printf("6.Mostrar todos los datos de la poliza\n 7.Para Salir.");
    int ans = 0;
    scanf("%d",&ans);
    int definition;
    switch (ans){
    case 1:
        definition = policytypedef();
        if (definition >= 1 || definition <= 4){
            add(po,&it, definition);
        }else{
            menu();
        }
        
        break;
    /*case 2:
        delete();
        break;
    case 3:
        search();
        break;
    case 4: 
        edit();
        break;
    case 5:
        datashow();
        break;
    case 6: 
        datashowall();
        break; */
    case 7: 
        printf("Gracias por escojernos :)");
        return 0;
    }

}


int main(){
    struct policy p[10];
    int size = 10;
    int i = 0 ;
    menu(p,&i);
    ++i;
    
    

}


