
    /* Función: Definir la estructura del nodo que contiene datos enteros. */

        # ifndef stdio_h
        #include <stdio.h>
        #define  stdio_h
        #endif

    typedef struct nodoentero
    {
            int dato_entero;
            struct nodoentero * siguiente ;
    } *nododeentero ;
