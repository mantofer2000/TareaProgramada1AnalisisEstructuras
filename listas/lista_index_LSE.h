#ifndef Lista_Indexada_Mia2
#define Lista_Indexada_Mia2
#include <iostream>
#include <algorithm>
#include <array>
#define elemntoNulo -9999999

// PREGUNTAR SI LOS INDICES PUEDEN NO ESTAR SECUENCIALES 2 4 6 7 12 

class Lista{
    private:
        struct Celda{
            Celda(int indice);
            int indice;
            int elemento;
            Celda* siguiente;
            ~Celda();
        };
        Celda* inicio;
        int contador;
        int m;
    public:
        Lista();
        void iniciar(int m); 
        void vaciar();
        bool vacio();
        void crearCelda(int);
        void destruir();
        ~Lista();
        void insertar(int, int);
        void borrar(int);
        int recuperar(int);
        void modificarElemento(int, int);
        void intercambiar(int indice1, int indice2);
        int numElem();
        void imprimirLista();
};
#endif