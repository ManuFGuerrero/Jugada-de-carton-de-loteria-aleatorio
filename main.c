#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "carton.h"
#include "jugada.h"

int main()
{

srand(time(0));

jugada j1= crearJugada();
carton c1= crearCarton();


verificarAciertos (getNumeros(c1) , getCartonGanador(j1),c1 );

mostrarJugada(j1);


mostrarCarton(c1);

    return 0;
}
