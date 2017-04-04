    #ifndef  todaslibrerias_h
    #include "todaslibrerias.h"
    #define  todaslaslibrerias_h
    #endif
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   //La Lista con encabezado tendrá datos del tipo entero y la Lista sin encabezado datos tipo cadena e carcteres.
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 void imprimir_con_encabezado (listaconencabezado lc)
 {
     /*  Función Imprimir la Lista con encabezado , recorriendo desde la primera hasta la última
         posición de la Lista.
     */
     if ((lc->primero) != NULL)
     {
         nododeentero ne=(lc->primero);
         while (ne != NULL)
         {
              printf(" %i ",ne->dato_entero);
              ne=ne->siguiente;
         }
     }
        else  printf("\n No hay ningun elemento en la Lista con encabezado.\n");
 }
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 void imprimir_sin_encabezado (listasinencabezado ls)
 {
     /*  Función Imprimir la Lista sin encabezado , recorriendo desde la primera hasta la última
         posición de la Lista.
     */
     if ((ls->primernodo) != NULL)
     {
         nododestring ns=(ls->primernodo);
         while (ns != NULL)
         {
              printf(" %s ",ns->dato_string);
              ns=ns->siguiente;
         }
     }
        else  printf("\n No hay ningun elemento en la Lista sin encabezado.\n");
 }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
     nododestring Crear_nodo_string ()
    {
         /* Función para inicializar el nodo ,  solo se pide la memoria dinámica.*/
          nododestring ns = (nododestring)malloc(sizeof (struct nodostring)) ;
          //ns=NULL;
          if (ns == NULL) printf("\n Ocurri\242 un error al pedir memoria para el nodo string. \n");
          return ns;
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    nododeentero Crear_nodo_entero ()
    {
         /* Función para inicializar el nodo , solo se pide la memoria dinámica.*/
          nododeentero ne = (nododeentero)malloc(sizeof (struct nodoentero)) ;
          //ne=NULL;
          if (ne == NULL)  printf("\n Ocurri\242 un error al pedir memoria para el nodo entero. \n");
          return ne;
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      nododestring Crear_nodo_string_y_agregar ( char *cadena )
    {
         /* Función para inicializar el nodo y agregar una cadena de caracteres dada
           solo en caso de que no halla ocurrido un error.*/
          nododestring ns = Crear_nodo_string();
          //ns=NULL;
          if (ns == NULL)  printf("\n Ocurri\242 un error al pedir memoria para el nodo string. \n");
           else
                {
                     (ns->dato_string) = cadena ;
                     (ns->siguiente) = NULL;
                }
          return ns;
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    nododeentero Crear_nodo_entero_y_agregar (int entero)
    {
        /* Función para inicializar un nodo y agregar un dato entero dado
            solo en caso de que no halla ocurrido un error.*/
        nododeentero ne = Crear_nodo_entero();
        //ne=NULL;
        if (ne == NULL)  printf("\n Ocurri\242 un error al pedir memoria para el nodo entero. \n");
        else
               {
                    (ne->dato_entero) = entero ;
                    (ne->siguiente) = NULL;
               }
        return ne;
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    listasinencabezado lista_vacia_sin_encabezado ()
    {
          /* Función  Para inicializar la Lista sin encabezado
             se pide la memoria y se inicializa a NULL.*/
          listasinencabezado ls = (listasinencabezado)malloc(sizeof(struct sinencabezado));
          //ls=NULL;
          if (ls == NULL)  printf("\n Ocurri\242 un error al pedir memoria para la Lista sin encabezado. \n");
          else  {
                        (ls->primernodo) = NULL;
                      }
        return ls;
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void agregar_al_inicio_sin_encabezado (listasinencabezado *ls)
    {
         /*
               Función que agrega un elemento al inicio de la Lista sin encabezado,
               Primero se comprueba de que no sea NULL para que no hallan errores,
               Se declara un nodo y se le asigna el puntero de la Lista , para que nuestro nuevo
               dato ocupe el primer lugar y su nodo siguiente sea el antiguo primer elemento.
         */
         nododestring ns = Crear_nodo_string_y_agregar("holi")  , nsaux ;
         if (ns == NULL)  printf("\n Ocurri\242 un error al pedir memoria para el nodo string. \n");
         else {
                     nsaux=((*ls)->primernodo);
                     ((*ls)->primernodo)=ns;
                     ((ns)->siguiente)=nsaux;
                }
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void agregar_al_final_sin_encabezado (listasinencabezado *ls)
    {
        /* Función que agrega un elemento al final de la Lista sin encabezado ,
            Primero se comprueba de que no sea NULL para que no hallan errores
            despues se recorre la Lista hasta el ultimo elemento y se procese ha asignarle el nuevo nodo.
       */
                       nododestring ns = Crear_nodo_string_y_agregar("hola")  , nsaux ;
         if (ns == NULL)  printf("\n Ocurri\242 un error al pedir memoria para el nodo string en la Lista sin encabezado. \n");
         else {
                       nsaux = ((*ls)->primernodo);
                       while ((nsaux->siguiente ) != NULL )
                                    nsaux=nsaux->siguiente;
                       nsaux->siguiente =ns;
                   }
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 void elimina_elemento_al_inicio_sin_encabezado (listasinencabezado *ls)
 {
       /*Función que elimina el primer elemento de la Lista.
          caso a.  :  Que el puntero de la lista no tenga elemento (ejemplo : recien se inicio la Lista)  ,
                              en este caso se manda un mensaje diciendo que no hay elementos para eliminar.
          caso b. :   Este caso aplica cuando halla uno o mas elementos , se declara el nodo que se va a
                              eliminar y a la Lista le asignamos el nodo siguiente al dato a eliminar .
                              En caso de que tenga 1 solo elemento resulta NULL y si tiene más de uno queda el siguiente dato.
         después de realizar b. se procede a eliminar el nodo.
        */
       if (((*ls)->primernodo) == NULL) printf("\n Ocurri\242 un error , no hay elementos de la Lista sin encabezado para eliminar. \n");
       else
       {
            nododestring nsaux = (*ls)->primernodo;
            (*ls)->primernodo=(((*ls)->primernodo)->siguiente);
            free(nsaux);
       }
 }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  void elimina_elemento_al_final_sin_encabezado (listasinencabezado *ls)
 {
      /* Función que elimina el ultimo elemento de la Lista.
          caso a.  :  Que el puntero de la lista no tenga elemento (ejemplo : recien se inicio la Lista)  ,
                              en este caso se manda un mensaje diciendo que no hay elementos para eliminar.
          caso b. :  Que la Lista tenga solo un elemento , en este caso el puntero de la Lista debe asignarse NULL.
          caso c. :  Para Listas con más de un elemento , en este caso se usa un auxiliar para que tenga la posición anterior
                             del elemento a eliminar, asignandole el valor NULL del puntero siguiente del dato que queremos eliminar.
         después de realizar b. o c. se procede a eliminar el nodo.
     */
       if (((*ls)->primernodo) == NULL) printf("\n Ocurri\242 un error , no hay elementos de la Lista sin encabezado para eliminar. \n");
       else {
                            nododestring nsaux = (*ls)->primernodo;
                                              while ((nsaux->siguiente )!= NULL)
                                              nsaux=nsaux->siguiente;
                                              if(nsaux==((*ls)->primernodo))
                                             (*ls)->primernodo=NULL;
                                else{
                                                nododestring nsaux2=(*ls)->primernodo;
                                                while ((((nsaux2)->siguiente)->siguiente) != NULL)
                                                nsaux2=nsaux2->siguiente;
                                                (nsaux2->siguiente)=(nsaux->siguiente);
                                          }
                            free(nsaux);
                    }
 }
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 listaconencabezado lista_vacia_con_encabezado ()
{
       /* Función Crear Lista con encabezado , para ello
           se pide la memoria dinámica y se inicializa sus nodos a NULL
           y su número de elementos a cero.
       */
        listaconencabezado lc = (listaconencabezado)malloc(sizeof (struct conencabezado));
        //lc=NULL;
        if (lc==NULL) printf("\n Ocurri\242 un error al pedir memoria para la Lista con encabezado. \n");
        else
            {
                  (lc)->primero = (lc)->ultimo = NULL;
                  (lc)->numero_de_elementos=0;
            }
         return lc;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void agregar_al_inicio_con_encabezado( listaconencabezado * lc)
{
        /*
               Función que agrega un elemento al inicio de la Lista con encabezado,
               Primero se comprueba de que no sea NULL para que no hallan errores,
               Se pregunta si el número de elementos es igual a cero (no hay elementos) ,
               si es verdadero los nodos primero y ultimo se les asigna el nodo entero ,
               sino el puntero siguiente al dato agregado se le asigna el nodo primero
               de la Lista y a éste se le asigna el nuevo dato ,  finalmente aumenta
               en una unidad la cantidad de elementos.
         */
         nododeentero ne = Crear_nodo_entero_y_agregar(4) ;
         if (ne == NULL)  printf("\n Ocurri\242 un error al pedir memoria para el nodo entero. \n");
         else {
                       if ( ((*lc)->numero_de_elementos) == 0 )
                          (*lc)->primero = (*lc)->ultimo = ne;
                     else
                            {
                                    (ne->siguiente) = ((*lc)->primero);
                                    ((*lc)->primero) = ne;
                             }
                     ((*lc)->numero_de_elementos)++;
                }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void agregar_al_final_con_encabezado (listaconencabezado *lc)
    {
        /* Función que agrega un elemento al final de la Lista con encabezado ,
            Primero se comprueba de que no sea NULL para que no hallan errores
            despues se recorre la Lista hasta el ultimo elemento y se procese ha asignarle el nuevo nodo.
       */
                       nododeentero ne = Crear_nodo_entero_y_agregar(5) ;
         if (ne == NULL)  printf("\n Ocurri\242 un error al pedir memoria para el nodo entero en la Lista con encabezado. \n");
         else {
                         if ( ((*lc)->numero_de_elementos)  == 0)
                              (*lc)->primero = (*lc)->ultimo = ne;
                         else
                            {
                                 nododeentero neaux = ((*lc)->primero);
                                 while ((neaux -> siguiente) != NULL)
                                     neaux=(neaux->siguiente);
                                     (neaux)->siguiente = ne;
                                     ((*lc)->ultimo)=ne;
                            }
                         ( (*lc)->numero_de_elementos ) ++;
                   }
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 void elimina_elemento_al_inicio_con_encabezado (listaconencabezado *lc)
 {
       /*Función que elimina el nodo que esta al principio de la Lista
          con encabezado,existen 3 casos  :
          a.el numero de elementos es cero , esto significa que no hay elementos para eliminar.
          b.la lista tiene un solo nodo , es decir el primero y el ultimo son el mismo nodo , en ese caso se hacen NULL.
          c.la lista tiene mas nodos , se declara un auxiliar para guardar el primer elemento , el primer elemento
                  se  cambia por el segundo elemento y se libera el auxiliar.
          si se realiza b. o c. entonces se debe disminuir el número de elementos en una unidad.
      */
       if (((*lc)->numero_de_elementos) == 0) printf("\n Ocurri\242 un error , no hay elementos de la Lista con encabezado para eliminar. \n");
       else
       {
             if ( ((*lc)->primero) ==  ((*lc)->ultimo) )
                ((*lc)->ultimo) = ((*lc)->primero) = NULL;
             else
                     {
                           nododeentero neaux = ((*lc)->primero);
                           ((*lc)->primero) = ((neaux) ->siguiente);
                           free(neaux);
                     }
            ((*lc)->numero_de_elementos ) --;
       }
 }
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  void elimina_elemento_al_final_con_encabezado (listaconencabezado *lc)
 {
      /* Función que elimina el ultimo elemento de la Lista.
          caso a.  :  Que el puntero de la lista no tenga elemento (ejemplo : recien se inicio la Lista)  ,
                              en este caso se manda un mensaje diciendo que no hay elementos para eliminar.
          caso b. :  Que la Lista tenga solo un elemento , en este caso el puntero de la Lista debe asignarse NULL.
          caso c. :  Para Listas con más de un elemento , en este caso se usa un auxiliar para que tenga la posición anterior
                             del elemento a eliminar, asignandole el valor NULL del puntero siguiente del dato que queremos eliminar.
                             después se elimina el nodo.
     */
       if (((*lc)->numero_de_elementos) == 0) printf("\n Ocurri\242 un error , no hay elementos de la Lista con encabezado para eliminar. \n");
       else {
                            if ( ((*lc)->primero) == ((*lc)->ultimo) )
                                    ((*lc)->primero) = ( (*lc)->ultimo) = NULL;
                            else
                                {
                                       nododeentero neliminar = ((*lc)->ultimo) , neaux = ((*lc)->primero) ;
                                       while ( (neaux ->siguiente) != (neliminar) )
                                                       neaux=(neaux->siguiente);
                                                      (neaux->siguiente)=NULL;
                                                      ((*lc)->ultimo)=neaux;
                                                      free(neliminar);
                               }
                               ((*lc)->numero_de_elementos)--;
                    }
 }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int main( int argc , char ** argv)
    {
        listasinencabezado ls;   listaconencabezado lc;                          //Declaramos ambos tipos de Listas.

        /* CASO ELIMINAR ELEMENTO DE LA LISTA SIN ENCABEZADO CUANDO NO HAY NINGUNO.
        printf("\n Caso inicializar Lista sin encabezado y eliminar elemento \n");
         ls=lista_vacia_sin_encabezado();
         elimina_elemento_al_final_sin_encabezado(&ls);
         // puede usar tambien
         elimina_elemento_al_inicio_sin_encabezado(&ls);
         free(ls); */

        /* // CASO ELIMINAR ELEMENTO DE LA LISTA CON ENCABEZADO CUANDO NO HAY NINGUNO.
        printf("\n Caso inicializar Lista con encabezado y eliminar elemento \n");
         lc=lista_vacia_con_encabezado();
         elimina_elemento_al_final_con_encabezado(&lc);
         // puede usar tambien
         elimina_elemento_al_inicio_con_encabezado(&lc);
         free(lc); */


         printf("\nLista Simple Sin Encabezado\n");
         ls=lista_vacia_sin_encabezado();                                                     //pedir memoria para la Lista sin encabezado.
         printf("\n-----------------------------------------------------------------------\n");
        for (int i=1; i<=5;i++)                                                                                //agregamos 5 elementos al inicio de la lista sin encabezado.
        agregar_al_inicio_sin_encabezado(&ls);
        for (int i=1; i<=5;i++)
        agregar_al_final_sin_encabezado(&ls);                                           //agregamos 5 elementos al final de la lista sin encabezado.
        imprimir_sin_encabezado(ls);
        printf("\n------------------------------------------------------------------------\n");
        system("pause"); system("cls");
        printf("\nBorrando los elementos de la Lista Sin Encabezado\n");
        printf("\n------------------------------------------------------------------------\n");
        for (int i=1; i<=5;i++)                                                                                //Borramos 5 elementos al final de la lista sin encabezado.
        elimina_elemento_al_final_sin_encabezado(&ls);
        for(int i=1; i<=5; i++)
         elimina_elemento_al_inicio_sin_encabezado(&ls);                      //Borramos 5 elementos al inicio de la lista sin encabezado.
        imprimir_sin_encabezado(ls);
        printf("\n------------------------------------------------------------------------\n");
        free(ls); system("pause"); system("cls");                                        //Liberamos la memoria pedida para la Lista sin encabezado.


        printf("\nLista Simple Con Encabezado\n");
         lc=lista_vacia_con_encabezado();                                                     //pedir memoria para la Lista con encabezado.
         printf("\n-----------------------------------------------------------------------\n");
        for (int i=1; i<=5;i++)                                                                                 //agregamos 5 elementos al inicio de la lista con encabezado.
        agregar_al_inicio_con_encabezado(&lc);
        for (int i=1; i<=5;i++)
        agregar_al_final_con_encabezado(&lc);                                           //agregamos 5 elementos al final de la lista con encabezado.
        imprimir_con_encabezado(lc);
        printf("\n------------------------------------------------------------------------\n");
        system("pause");system("cls");
        printf("\n\n El n\243mero de elementos de la Lista Con Encabezado es de : %i \n\n",(lc->numero_de_elementos));   //Muestra la cantidad de elementos de la Lista Con Encabezado.
        printf("\nBorrando los elementos de la Lista Con Encabezado\n");
        printf("\n------------------------------------------------------------------------\n");
        for (int i=1; i<=5;i++)                                                                                 //Borramos 5 elementos al final de la lista con encabezado.
        elimina_elemento_al_final_con_encabezado(&lc);
        for(int i=1; i<=5; i++)
        {                                                                                                                        //Borramos 5 elementos al inicio de la lista con encabezado.
         printf("\n %i \n",lc->numero_de_elementos); elimina_elemento_al_inicio_con_encabezado(&lc);   }
        imprimir_con_encabezado(lc);
        printf("\n------------------------------------------------------------------------\n");
        free(lc); system("pause");  system("cls");                                         //Liberamos la memoria pedida para la Lista sin encabezado.

        return 0;
    }
