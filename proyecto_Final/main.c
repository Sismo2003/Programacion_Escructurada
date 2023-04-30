#include <stdio.h>
#include "structs.h"
/*
void datashowall(){

}

void datashow(){

}

void edit(){

}

void search(){

}


void delete(){

}
*/
int sort(struct policy *p, int beging, int end, int search){
    int half =(beging + end)/2;
    if(search == half){
        return half;
    }
    else if(search<p[half].id){
        sort(p,half+1,end,beging);
    }
    else if(search>p[half].id){
        sort(p,half-1,end,beging);
    }else{
        return -1;
    }

}

int policytypedef (){
    printf("Selecione un tipo de poliza:\n");
    printf(" 1.Automotris\n 2.Vida\n 3.Negocios\n 4.Casa\n");
    int ans = 0;
    int flag = 0;
    printf("---> ");
    scanf("%d",&ans);
    while(flag == 0){
        if(ans >=1 && ans <= 4){
            flag++;
            return ans;
        }else{
            printf("ERROR 1\n");
        }
    }
}

void add(struct policy *p, int *id,int policyType){
    printf("---AGREGAR POLIZA---");
    printf("introduce el nombre del dueño de la poliza");
    scanf("%s", p[*id].policyOwner.name);
    printf("introduce el apellido del dueño de la poliza");
    scanf("%s", p[*id].policyOwner.lastname);
    printf("introduce el numero de telefono del dueño de la poliza");
    scanf("%s", p[*id].policyOwner.contactPhone);
    printf("introduce el correo electronico del dueño de la poliza");
    scanf("%s", p[*id].policyOwner.contactMail);
    printf("introduce la dirección del dueño");
    printf("pais");
    scanf("%s", p[*id].policyOwner.addres.country);
    printf("estado");
    scanf("%s", p[*id].policyOwner.addres.state);
    printf("ciudad");
    scanf("%s", p[*id].policyOwner.addres.city);
    printf("colonia");
    scanf("%s", p[*id].policyOwner.addres.suburb);
    printf("calle");
    scanf("%s", p[*id].policyOwner.addres.street);
    printf("numero exterior");
    scanf("%s", p[*id].policyOwner.addres.streetNumber);
    printf("numero interior");
    scanf("%s", p[*id].policyOwner.addres.innerNumber);
    printf("introduce el precio de la poliza");
    scanf("%f", &p[*id].genaralData.price);
    printf("introduce el deducible de la poliza");
    scanf("%f", &p[*id].genaralData.deductible);
    printf("introduce la suma asegurada de la poliza");
    scanf("%f", &p[*id].genaralData.sumAssured);
    printf("introduce el tipo de covertura de la poliza");
    scanf("%s", p[*id].genaralData.coverage);
    printf("introduce la fecha de vigencia de la poliza");
    printf("año");
    scanf("%s", p[*id].genaralData.vigency.year);
    printf("mes");
    scanf("%s", p[*id].genaralData.vigency.month);
    printf("dia");
    scanf("%s", p[*id].genaralData.vigency.day);

    switch (policyType)
    {
    case 1:
        printf("introduzca la dirección asegurada\n");
        printf("pais\n");
        scanf("%s", p[*id].policyOwner.addres.country);
        printf("estado\n");
        scanf("%s", p[*id].policyOwner.addres.state);
        printf("ciudad\n");
        scanf("%s", p[*id].policyOwner.addres.city);
        printf("colonia\n");
        scanf("%s", p[*id].policyOwner.addres.suburb);
        printf("calle\n");
        scanf("%s", p[*id].policyOwner.addres.street);
        printf("numero exterior\n");
        scanf("%s", p[*id].policyOwner.addres.streetNumber);
        printf("numero interior\n");
        scanf("%s", p[*id].policyOwner.addres.innerNumber);

        break;
    case 2:
        printf("introduzca la dirección asegurada");
        printf("pais\n");
        scanf("%s", p[*id].policyOwner.addres.country);
        printf("estado\n");
        scanf("%s", p[*id].policyOwner.addres.state);
        printf("ciudad\n");
        scanf("%s", p[*id].policyOwner.addres.city);
        printf("colonia\n");
        scanf("%s", p[*id].policyOwner.addres.suburb);
        printf("calle\n");
        scanf("%s", p[*id].policyOwner.addres.street);
        printf("numero exterior\n");
        scanf("%s", p[*id].policyOwner.addres.streetNumber);
        printf("numero interior\n");
        scanf("%s", p[*id].policyOwner.addres.innerNumber);
        break;
    case 3:
    /*
    
    */
        printf("introduzca la marca del carro asegurado\n");
        printf("introduzca el modelo del carro asegurado\n");
        break;

    case 4: // life
        break;
    }

    (*id)++;
}





int menu (struct policy *po, int *it){
    printf("Bienvenido al sistema de polizas\n");
    printf("Escoja una opción:\n");
    printf("1.Agregar\n 2.Eliminar\n 3.Buscar\n 4.Editar\n 5.Mostar algun dato en especifico");
    printf("6.Mostrar todos los datos de la poliza\n 7.Para Salir.\n");
    printf("---> ");
    int ans = 0;
    scanf("%d",&ans);
    int definition;
    int exit = 0;
    while (!exit){
        switch (ans){
            case 1:
                definition = policytypedef();
                if (definition >= 1 || definition <= 4){
                    // add(po,&it, definition);
                    ans++;
                    add(po,&it, definition);
                }else{
                    printf("Error 0");
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
                ++exit;
        }
    }
}


int main(){
    struct policy p[10];
    int size = 10;
    int i = 0 ;
    menu(p,&i);
    ++i;
    
    

}


