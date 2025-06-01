#ifndef JUEGOS_H
#define JUEGOS_H

using namespace std;

class Juegos
{
    public:
        Juegos();
        Juegos(string fecha, string resultado, int puntaje, bool aciertos, bool fallos,int intentos);
        virtual ~Juegos();

        virtual void VerInformacionPartida() = 0;

        void IniciarJuego();
        void CerrarJuego();
        void ConfigurarJuego();




    protected:

        string fecha, resultado;
        int puntaje, intentos;
        bool aciertos, fallos;



    private:
};

#endif // JUEGOS_H
