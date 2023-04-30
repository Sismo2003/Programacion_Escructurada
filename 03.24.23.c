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

int main (){
    int x = 4;
    int *y;
    y=&x;
    printf("%d y %p\n" , x,)



    return 0;
}