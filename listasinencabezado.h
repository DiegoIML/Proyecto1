
       /* Función : Definir la estructura Lista sin encabezado , es decir , apuntando solo al primer nodo*/

           # ifndef stdio_h
           #include <stdio.h>
           #define  stdio_h
           #endif

          #ifndef nodostring_h
          #include "nodostring.h"
          #define  nodostring_h
          #endif

       typedef struct sinencabezado
       {
               nododestring primernodo ;
       } *listasinencabezado ;
