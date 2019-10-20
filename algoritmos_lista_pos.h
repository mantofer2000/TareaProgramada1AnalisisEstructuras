#ifndef ALGORITMO
#define ALGORITMO

// #include "lista_pos_Arreglo.h"

#include "lista_pos_LDE.h"

//#include "lista_pos_LSE.h"

class Algoritmos_Pos{
    private:
   //   Lista_Pos lista;
   public:
	  Algoritmos_Pos(); 
     // Algoritmos_Pos(Lista_Pos &lista);
      int simetrica(Lista_Pos &lista); // Se pueden cambiar las firmas y hacerlo por omision, pero hay que ver si se puede quitar
      void invertir(Lista_Pos &lista); //Ver si tiene que devolver una lista nueva o modifica la misma
      int buscar(Lista_Pos &lista, int elemento);
      void eliminarRepetidos(Lista_Pos &lista);  // Falta
      void burbuja(Lista_Pos &lista);
      void insercion(Lista_Pos &lista); 
      void seleccion(Lista_Pos &lista);
      void seleccionRecursivo(Lista_Pos &lista, Pos pos);
      void quickSort(Lista_Pos &lista); 
      void quickSortRecursivo(Lista_Pos &lista, Pos low, Pos high); 
      void quickSort_insercion(Lista_Pos &lista); 
      Pos buscarPivote(Lista_Pos &lista, Pos low, Pos high); 
      Lista_Pos mergeSort(Lista_Pos &lista);
      Lista_Pos merge(Lista_Pos &, Lista_Pos &);
};
#endif
