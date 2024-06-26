#ifndef CARTON_H_INCLUDED
#define CARTON_H_INCLUDED
#define TAM 8

struct cartonE;

typedef struct cartonE * carton;

carton crearCarton();
carton crearCartonTeclado();

int verificarRepetidos(int v[], int n);
void ordenarCarton (int v[],int t);

void verificarAciertos (int v[],int k[],carton c);


void mostrarCarton(carton c);

int * getNumeros (carton c);

#endif // CARTON_H_INCLUDED
