#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int documento;

}ePersona;
/** \brief inicializa todos los estados en 0.
 *
 * \param el array se pasa como parametro.
 * \param el tamaño maximo del array.
 *
 */

void inicializarEstados (ePersona[],int);

/** \brief realiza la carga de datos de la persona.
 *
 * \param el array se pasa como parametro.
 * \param el tamaño maximo del array.
 *
 */
void cargarPersona(ePersona[],int);

/** \brief realiza la accion de borrar a una persona.
 *
 * \param el array se pasa como parametro.
 * \param el tamaño maximo del array.
 *
 */
void borrarPersona(ePersona[],int);

/** \brief realiza la accion de mostrar a una persona en especifico.
 *
 * \param los datos de la persona se pasan como parametro.
 */
void mostrarUnaPersona(ePersona);

/** \brief realiza la accion de mostrar la lista de personas.
 *
 * \param el array se pasa como parametro.
 * \param el tamaño maximo del array.
 *
 */
void mostrarLista(ePersona [],int);

/** \brief realiza la accion de mostrar la lista de personas.
 *
 * \param el array se pasa como parametro.
 * \param el tamaño maximo del array.
 *
 */
void ordenar(ePersona [],int);

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(ePersona lista[],int);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(ePersona lista[], int ,int);

/** \brief realiza un grafico de barras mostrando asteriscos dependiendo la edad de la persona.
 *
 * \param el array se pasa como parametro.
 * \param el tamaño maximo del array.
 *
 */
void graficoDeBarras(ePersona[], int);
#endif // FUNCIONES_H_INCLUDED
