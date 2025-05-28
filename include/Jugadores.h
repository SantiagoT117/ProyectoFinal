#ifndef JUGADORES_H
#define JUGADORES_H

#include <string>


using namespace std;

class Jugadores
{
    public:
        Jugadores();
        Jugadores(string& nombre, int codigo);

        string getNombre();
        int getCodigo();
        int getVictorias();
        int getDerrotas();

        bool actualizarInformacion(string& nuevoNombre, int codigo);

        void mostarInformacion();
        void verPuntaje();


    private:
        string nombre;
        int codigo;
        int victorias;
        int derrotas;
};

#endif // JUGADORES_H
