#include "Jugadores.h"
#include <iostream>

Jugadores::Jugadores()
{
    nombre = "";
    codigo = 0;
    victorias = 0;
    derrotas = 0;
}

Jugadores::Jugadores(string& nombre, int codigo)
{
    this-> nombre=nombre;
    this-> codigo=codigo;
}

string Jugadores::getNombre(){
    return nombre;
}
int Jugadores::getCodigo(){
    return codigo;
}
int Jugadores::getVictorias(){
    return victorias;
}

int Jugadores::getDerrotas(){
    return derrotas;
}



bool Jugadores::actualizarInformacion(string& nuevoNombre, int codigo)
{
    int confirmacionCodigo = 0;

    cout << "ingrese el codigo actual para confirmar" << endl ;
    cin >> confirmacionCodigo;

    if (codigo = confirmacionCodigo){
       nombre = nuevoNombre;
       this->codigo = codigo;
       return true;
    }
    return false;
}


void Jugadores::mostarInformacion(){
    cout << "Codigo: " << getCodigo() << endl;
    cout << "Nombre: " << getNombre() << endl;
}

void Jugadores::verPuntaje(){
    cout << "Jugador: " << getNombre() <<endl;
    cout << "Victorias: " << getVictorias() << endl;
    cout << "Derrotas: " << getDerrotas() << endl;
}


