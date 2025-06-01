#include "Juegos.h"
#include <iostream>

Juegos::Juegos()
{
    fecha = "";
    resultado = "";
    puntaje = 0;
    aciertos = false;
    fallos = false;
    intentos = 0;
}

Juegos::Juegos(string fecha, string resultado, int puntaje, bool aciertos, bool fallos, int intentos)
{
    this -> fecha = fecha;
    this -> resultado = resultado;
    this -> puntaje = puntaje;
    this -> aciertos = aciertos;
    this -> fallos = fallos;
    this -> intentos = intentos;
}

Juegos::~Juegos(){
}

void Juegos::IniciarJuego(){
    cout << "Iniciando juego..." << endl;
}

void Juegos::CerrarJuego(){
    cout << "Muchas gracias por jugar... saliendo" << endl;
}

void Juegos::ConfigurarJuego(){
    cout << "Abriendo las configuraciones:" << endl;
}
