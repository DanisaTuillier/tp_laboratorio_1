#include "funciones.h"
#include <stdio.h>
#include <inttypes.h>

float sumar (float numero1, float numero2 )
{
    float resultado;
    resultado=numero1+numero2;
    return resultado;

}
float restar(float numero1, float numero2)
{
    float resultado;
    resultado=numero1-numero2;
    return resultado;
}

float dividir (float numero1, float numero2)
{
    float resultado;

    if (numero2==0)
    {
        printf ("No se puede dividir por cero\n");
    }
    else
    {
        resultado=numero1/numero2;
        printf("El resultado de la division es :%.2f\n",resultado);
    }


    return resultado;

}


float multiplicacion (float numero1, float numero2)
{
    float resultado;
    resultado=numero1*numero2;
    return resultado;
}

long long int factorial(float numero1)
{

    int auxiliar=(int)numero1;
    long long int resultadoFactorial=1;
    if(auxiliar<numero1)
    {
        printf("No se puede obtener el factorial de un flotante\n");
    }
    else
    {
        if(numero1<0)
        {
            printf("No se puede factorizar un numero negativo\n");
        }
        else
        {
            for(auxiliar=(int)numero1; auxiliar>0; auxiliar--)
            {
                resultadoFactorial=resultadoFactorial*auxiliar;
            }
            printf("El factorial es :%lld\n",resultadoFactorial);
        }
    }

    return resultadoFactorial;
}
