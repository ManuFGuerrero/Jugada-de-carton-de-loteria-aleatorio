#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "jugada.h"
#include "carton.h"



struct JugadaE{

int cartonGanador[TAMJUGADA];
int numAcertados[TAM];

};

jugada crearJugada(){

jugada j=malloc(sizeof(struct JugadaE));

int aux,flag;
 for (int i=0;i<TAMJUGADA;i++){
        do{
            aux=rand()%100;
            flag=verificarRepetidos(j->cartonGanador,aux);
        }while(flag==1);
    j->cartonGanador[i]=aux;
 }
ordenarCarton(j->cartonGanador,TAMJUGADA);

return j;
};

void mostrarJugada(jugada j){

printf("\nNUMEROS GANADORES:");

for (int i=0;i<TAMJUGADA;i++){
    printf("%d ",j->cartonGanador[i]);
    if(i==10){
        printf("\n");
    }
}

};

int * getCartonGanador(jugada j){

return j->cartonGanador;
};




