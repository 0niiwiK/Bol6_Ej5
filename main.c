#include <stdio.h>

int main() {
    int minutos;
    float coste;
    printf("Introduce minutos de la llamada: ");
    scanf("%d",&minutos);
    if (minutos<3)
        coste=0.25;
    else
        coste=0.25+(minutos-2)*0.1;
    printf("Coste de la llamada: %.2f",coste);
    return 0;
}
