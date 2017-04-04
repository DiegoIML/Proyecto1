
   /* Función : Definir la estructura  del nodo que contiene datos tipo cadena de caracteres */

        # ifndef stdio_h
        #include <stdio.h>
        #define  stdio_h
        #endif

     typedef struct nodostring
     {
            char * dato_string;
            struct nodostring * siguiente;
     } *nododestring;
