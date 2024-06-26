Bingo C Project

Este proyecto es una simulación de un juego de bingo implementado en lenguaje C. El programa genera cartones de bingo con números aleatorios, permite verificar los aciertos comparándolos con una jugada ganadora generada también aleatoriamente, y muestra los resultados en la consola.

Descripción del Proyecto

El programa se compone de varias funciones para crear y manejar cartones y jugadas de bingo. Se generan números aleatorios asegurando que no se repitan y se ordenan para facilitar la visualización. Luego, se verifican los aciertos y se muestra el resultado, indicando si el jugador ha ganado algún premio o no.

Estructuras de Datos

struct cartonE: Define la estructura de un cartón de bingo.

struct JugadaE: Define la estructura de una jugada de bingo.

Funciones Principales

Carton

carton crearCarton(): Crea un cartón con números aleatorios.

carton crearCartonTeclado(): Permite ingresar los números del cartón manualmente.

int verificarRepetidos(int v[], int n): Verifica si un número ya está presente en un array.

void ordenarCarton(int v[], int t): Ordena un array de números en orden ascendente.

void verificarAciertos(int v[], int k[], carton c): Compara los números de un cartón con los números ganadores y cuenta los aciertos.

void mostrarCarton(carton c): Muestra la información del cartón y los números acertados.

int * getNumeros(carton c): Devuelve los números del cartón.

Jugada

jugada crearJugada(): Crea una jugada con números aleatorios.

void mostrarJugada(jugada j): Muestra los números ganadores.

int * getCartonGanador(jugada j): Devuelve los números ganadores.

Ejecución del Programa

Requisitos

Compilador de C (GCC recomendado)

Code::Blocks (opcional, pero recomendado para facilitar la compilación y ejecución)

Uso del Programa

Al ejecutar el programa, se generarán automáticamente una jugada de bingo y un cartón. 

El programa comparará los números del cartón con los números ganadores, mostrará cuántos aciertos hubo y si el jugador ha ganado algún premio.
