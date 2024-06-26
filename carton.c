#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "carton.h"
#include "jugada.h"


struct cartonE{

int numeros[TAM];
int aciertos;
int numAcertados[TAM];

int valor;
char fechaEmision[10];
char fechaJuego[10];
char direccion[20];
};


//CONSTRUCTORES
carton crearCarton(){

carton c=malloc(sizeof(struct cartonE));

int aux,flag;
for (int i=0;i<TAM;i++){
        do{
            aux=rand()%100;
            flag=verificarRepetidos(c->numeros,aux);
        }while(flag==1);
    c->numeros[i]=aux;
}

ordenarCarton(c->numeros,TAM);

strcpy(c->fechaEmision,"18-12-22");
strcpy (c->fechaJuego,"02-04-23");
strcpy (c->direccion,"Av.Rosas");
c->valor=70;

return c;
};

carton crearCartonTeclado(){

carton c=malloc(sizeof(struct cartonE));

for(int i=0;i<TAM;i++){
    printf("\n INGRESE EL NUMERO:");
    scanf("%d",&c->numeros[i]);

}

strcpy(c->fechaEmision,"18-12-22");
strcpy (c->fechaJuego,"02-04-23");
strcpy (c->direccion,"Av.Rosas");
c->valor=70;

return c;

};

//AUX
int verificarRepetidos(int v[],int n){

int flag=0;

for (int i=0;i<TAM;i++){
    if (v[i]==n){
        flag=1;
    }
}

return flag;
};

void ordenarCarton (int v[],int t){

int aux;
for (int i=0;i<t;i++){
    for (int j=0;j<t-1;j++){
        if(v[i]<v[j]){
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
    }
  }
}

};

void verificarAciertos (int v[], int k[],carton c){

int contador=0;

for (int i=0;i<TAM;i++){
c->numAcertados[i]=-1;
}

for (int i=0;i<TAM;i++){
    for (int j=0;j<TAMJUGADA;j++){
        if (v[i]==k[j]){
            c->numAcertados[i]=v[i];
            contador=contador+1;
        }
    }
}

printf("\n\nTU CANTIDAD DE ACIERTOS FUE: %d",contador);

if ( contador < 5 ){
    printf("\n\nLo siento PERDISTE\n");
}
if ( contador ==5 ){
    printf("\nGANASTE $50\n");
}
if ( contador==6 ){
    printf("\nGANASTE $500\n");
}
if ( contador==7 ){
    printf("\nGANASTE $20 MIL\n");
}
if ( contador==8 ){
    printf("\nGANASTE $11 MILLONES FELICITACIONES \n");
}


};



//MUESTRA
void mostrarCarton(carton c){

printf("\n\n FECHA EMISION %s \tFECHA JUEGO %s\n",c->fechaEmision,c->fechaJuego);
printf("\tDIRECCION: %s\nNROS DEL JUGADOR:",c->direccion);

for (int i=0;i<TAM;i++){
    printf(" /%d/ ",c->numAcertados[i]);
}



};

//GETS
int * getNumeros (carton c){
return c->numeros;
};
