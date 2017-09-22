#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"
#define  TAM 20

int main()
{
    ePersona persona [TAM];
    inicializarEstados(persona, TAM);
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

            cargarPersona(persona, TAM);
                break;
            case 2:
                borrarPersona(persona,TAM);
                break;
            case 3:
            printf("\nLista de personas:");
            ordenar(persona, TAM);
            mostrarLista(persona, TAM);
                break;
            case 4:
                graficoDeBarras(persona,TAM);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
