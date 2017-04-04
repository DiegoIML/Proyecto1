
      /* Función : Definir la estructura lista con encabezado , es decir , apuntando al primer y ultimo elemento.
          También forma parte de la estructura la cantidad de elementos que ésta posea.                                         */

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
