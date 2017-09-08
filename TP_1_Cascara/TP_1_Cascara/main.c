#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()

{
    char seguir='s';
    int opcion=0;
    float numero1;
    float numero2;
    float resultado;
    int flagA=0;
    int flagB=0;
    long long int resultadoFactorial;

    while(seguir=='s')
    {
        if (flagA==0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando (A=%f)\n",numero1);

        }
        if(flagB==0)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando (B=%f)\n",numero2);
        }


        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingrese un numero:");
            scanf("%f",&numero1);
            flagA=1;
            break;
        case 2:
            printf("Ingrese un numero:");
            scanf("%f",&numero2);
            flagB=1;
            break;
        case 3:
            if(flagA==0 || flagB==0)
            {
                printf("No se ingresaron los dos numeros.\n");
            }
            else
            {
                resultado=sumar(numero1,numero2);
                printf("El resultado de la suma es :%.2f\n",resultado);
            }
            break;
        case 4:
            if(flagA==0 || flagB==0)
            {
                printf("No se ingresaron los dos numeros.\n");
            }
            else
            {
                resultado=restar(numero1,numero2);
                printf("El resultado de la resta es :%.2f\n",resultado);
            }

            break;
        case 5:
            if(flagA==0 || flagB==0)
            {
                printf("No se ingresaron los dos numeros.\n");
            }
            else
            {
                resultado=dividir(numero1,numero2);
            }

            break;
        case 6:
            if(flagA==0 || flagB==0)
            {
                printf("No se ingresaron los dos numeros.\n");
            }
            else
            {
                resultado=multiplicacion(numero1,numero2);
                printf("El resultado de la multiplicacion es :%.2f\n",resultado);
            }

            break;
        case 7:
            if(flagA==0)
            {
                printf("No se ingreso numero.\n");
            }
            else
            {
                resultadoFactorial=factorial(numero1);
            }

            break;
        case 8:
            resultado=sumar(numero1,numero2);
            printf("El resultado de la suma es:%f\n",resultado);
            resultado=restar(numero1,numero2);
            printf("El resultado de la resta es:%f\n",resultado);
            resultado=dividir(numero1,numero2);
            printf("El resultado de la division es:%f\n",resultado);
            resultado=multiplicacion(numero1,numero2);
            printf("El resultado de la  multiplicacion es:%f\n",resultado);
            resultadoFactorial=factorial(numero1);
            printf("El factorial es:%lld\n",resultadoFactorial);
            break;
        case 9:
            seguir = 'n';
            break;
        }

    }
    return 0;

}

