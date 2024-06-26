#ifndef JUGADA_H_INCLUDED
#define JUGADA_H_INCLUDED
#define TAMJUGADA 20
struct JugadaE;

typedef struct JugadaE * jugada;

jugada crearJugada();

void mostrarJugada(jugada j);

int * getCartonGanador(jugada j);


#endif // JUGADA_H_INCLUDED
