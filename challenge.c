#include <stdio.h>
#include <stdlib.h>

int PRESUPUESTO = 100;

void gastar(){
    printf("En que quieres gastar tus bitcoins?\n1.- Cerveza 2$\n2.- Barcos y pujas 4$\n3.- Flags (Quiero aprobar!) 150$\n");
    printf("Tu saldo actual es: %d\n", PRESUPUESTO);
    printf("Opcion: ");
    int gastoEn;
    scanf("%d", &gastoEn);
    if(gastoEn==1){
        printf("Cuantas cervezas quieres comprar?\n");
        int cuantas;
        scanf("%d", &cuantas);
        if(cuantas <= 0){
            printf("Introduce una cantidad positiva diferente a 0\n");
            return;
        }
        if(PRESUPUESTO >= 2*cuantas){
            PRESUPUESTO = PRESUPUESTO - 2*cuantas;
        }else{
            printf("Te toca ahorrar crack!\n");
            return;
        }
    }else if(gastoEn==2){
        printf("Cuantos barcos quieres comprar?\n");
        int cuantas;
        scanf("%d", &cuantas);
        if(cuantas <= 0){
            printf("Introduce una cantidad positiva diferente a 0\n");
            return;
        }
        if(PRESUPUESTO >= 4*cuantas){
            PRESUPUESTO = PRESUPUESTO - 4*cuantas;
        }else{
            printf("Te toca ahorrar crack!\n");
            return;
        }
    }else if(gastoEn==3){
        printf("Cuantas flags quieres comprar?\n");
        int cuantas;
        scanf("%d", &cuantas);
        if(cuantas <= 0){
            printf("Introduce una cantidad positiva diferente a 0\n");
            return;
        }
        if(PRESUPUESTO >= 150*cuantas){
            PRESUPUESTO = PRESUPUESTO - 150*cuantas;
            printf("\n\n%s\n", getenv("CHALLENGE_FLAG"));
        }else{
            printf("Te toca ahorrar crack!\n");
            return;
        }
    }

    printf("Ahora tu presupuesto es de: %d\n", PRESUPUESTO);
    return;
}

void recargar(){
    printf("\nDe acuerdo, enviame tu numero de tarjeta, la fecha de caducidad y el numerito que sale por la parte de atras porfavor.\n Tranquilo, te puedes fiar de mi... o mejor no, sigue buscando :)\n\n");
    return;
}

int main(void) {
    // Disable output buffering, not part of the challenge
    setvbuf(stdout, NULL, _IONBF, 0);

    int option = -1;

    while(option!=3){
        if(option==1){
            gastar();
        }else if(option==2){
            recargar();
        }
        printf("-------------\n");
        printf("Bienvenido a la nueva criptotienda. Que deseas hacer?\n1.- Gastar Bitcoins\n2.- Recargar Bitcoins\n3.- Salir\n");
        printf("Tu saldo actual es: %d\n", PRESUPUESTO);
        printf("Opcion: ");
        scanf("%d", &option);
    }
    printf("Adios!\n");
    return 0;
}
