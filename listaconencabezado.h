
      /* Funci�n : Definir la estructura lista con encabezado , es decir , apuntando al primer y ultimo elemento.
          Tambi�n forma parte de la estructura la cantidad de elementos que �sta posea.                                         */

           # ifndef stdio_h
           #include <stdio.h>
           #define  stdio_h
           #endif

           #ifndef nodoentero_h
           #include "nodoentero.h"
           #define  nodoentero_h
           #endif

       typedef struct  conencabezado
       {
               int numero_de_elementos;
               nododeentero primero , ultimo ;
        } *listaconencabezado ;
