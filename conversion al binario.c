#include <stdio.h>
#include <math.h>

void solve ( int base, int number){
    int result[1000];
    int upper = 0, low = 0, aux = 0;
    while(base < number){ 
        low = number % base;
        number /= base; 
        result[aux] = low;
        ++aux;
    }
    result[aux]= number;
    if(aux < 2 ){
        for(int i = 0 ; i != aux+1; ++i){
            printf("%d",result[i]);
        }
    }
    else{
        while(aux != -1){
            printf("%d",result[aux]);
            --aux;
        }
    }
    printf("\n");

}


int main() {
    int numero = 0 , basse = 0;
    printf("Ingrese el numero para la conversion: ");
    scanf("%d",&numero);
    printf("Ingrese la base: ");
    scanf("%d",&basse);
    switch (basse){
    case (2):
        solve(basse,numero);
        break;
    case(4):
        solve(basse,numero);
        break;
    case(6):
        solve(basse,numero);
        break;
    case(8):
        solve(basse,numero);
        break;
    case(9):
        break;
    }
	return 0;
}
