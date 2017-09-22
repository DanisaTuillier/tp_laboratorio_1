#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"
int obtenerEspacioLibre(ePersona lista[], int tam)
{
    int i;
    int indice =-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
int buscarPorDni(ePersona persona[], int documento, int tam)
{
    int i;
    int indice=-1;
    for(i=0; i<tam; i++)
    {
        if(persona[i].documento==documento && persona[i].estado==1)
        {
            indice=i;
            break;
        }
    }
    return indice;
}
void inicializarEstados(ePersona lista[], int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {
        lista[i].estado=0;
    }
}

void mostrarUnaPersona(ePersona mostrar)
{
    printf("\n%s--%d--%d\n",mostrar.nombre, mostrar.edad, mostrar.documento);
}
void mostrarLista(ePersona persona[], int tam)
{
    int i;
    int flag=0;
    for(i=0; i<tam; i++)
    {
        if(persona[i].estado==1)
        {
            flag=1;
            mostrarUnaPersona(persona[i]);
        }
    }
    if (flag==0)
    {
        printf("No se ha ingresado ninguna persona \n");
    }
}
void cargarPersona(ePersona persona[], int tam)
{
    int aux;
    aux=obtenerEspacioLibre(persona, tam);
    if(aux>=0)
    {
        printf("Ingrese el nombre de la persona: \n");
        fflush(stdin);
        gets(persona[aux].nombre);
        printf("Ingrese la edad de la persona: \n");
        scanf("%d", &persona[aux].edad);
        printf("Ingrese el documento de la persona : \n");
        scanf("%d", &persona[aux].documento);
        persona[aux].estado=1;
    }
    else
    {
        printf("No hay espacio disponible. \n ");
    }
}
void borrarPersona(ePersona persona[], int tam)
{
    long int auxDoc;
    int indice;
    char respueta;
    printf("Ingrese el numero de documento de la persona a borrar. \n");
    fflush(stdin);
    scanf("%ld",&auxDoc);
    indice=buscarPorDni(persona, auxDoc, tam);
    if(indice>=0)
    {
        if(persona[indice].estado==1)
        {
            printf("\nEl documento ingresado corresponde a: ");
            mostrarUnaPersona(persona[indice]);
            printf("Quiere borrar a esta persona? ");
            fflush(stdin);
            respueta=getche();
            if(respueta=='s')
            {
                persona[indice].estado=0;
                printf("\nLa persona ha sido borrada. \n");
            }
            else
            {
                printf("\nAccion cancelada por el usuario. \n");
            }
        }

    }
    else
    {
        printf("El documento ingresado no existe.\n");
    }
}
void ordenar(ePersona persona[], int tam)
{
    int i;
    int j;
    ePersona auxPersona;
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if((strcmp(persona[i].nombre, persona[j].nombre)==1) && persona[i].estado==1)
            {
                auxPersona=persona[i];
                persona[i]=persona[j];
                persona[j]=auxPersona;
            }
        }
    }
}
void graficoDeBarras(ePersona persona[], int tam)
{
    int i;
    int rango1=0;
    int rango2=0;
    int rango3=0;
    int flagRango2=0;
    int mayorRango;
    for(i=0; i<tam; i++)
    {
        if(persona[i].estado==1)
        {

            if(persona[i].edad<=18 && persona[i].estado==1)
            {
                rango1++;
            }
            else
            {
                if(persona[i].edad>35 && persona[i].estado==1)
                {
                    rango3++;
                }
                else
                {
                    rango2++;
                }
            }
        }
    }
    if(rango1>=rango2 && rango1>=rango3)
    {
        mayorRango=rango1;
    }
    if(rango2>=rango1 && rango2>=rango3)
    {
        mayorRango=rango2;
    }
    if(rango3>=rango1 && rango3>=rango2)
    {
        mayorRango=rango3;
    }
    printf("\n");

    for (i=mayorRango; i>0; i--)
    {
        if(i<=rango1)
        {
            printf("*");
        }
        if(i<=rango2)
        {
            printf("\t*");
            flagRango2=1;
        }
        if(i<=rango3)
        {
            if(flagRango2==0)
            {
                printf("\t\t*");
            }
            if(flagRango2==1)
            {
                printf("\t*");
            }
        }
        printf("\n");
    }
    printf("-18\t19-35\t35+\n");
}


