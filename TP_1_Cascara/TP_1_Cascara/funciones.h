#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Realiza la suma entre numero1 y numero2.
 *
 * \param Recibe dos numeros flotantes.
 *
 * \return  Devuelve el resultado flotante de la suma entre numero1 y numero2.
 *
 */
float sumar (float numero1, float numero2 );


/** \brief Realiza la resta entre numero1 y numero2.
 *
 * \param Recibe dos numeros flotantes .
 *
 * \return Devuelve el resultado flotante de la resta entre numero1 y numero2.
 *
 */
float restar(float numero1, float numero2);


/** \brief Realiza la division entre numero1 y numero2 y verifica que no se divida por 0.

 *
 * \param Recibe dos numeros flotantes.
 *
 * \return Devuelve el resultado flotante de la division entre numero1 y numero2.
 *
 */
float dividir(float numero1, float numero2);


/** \brief Realiza la multiplicacion entre numero1 y numero2.

 *
 * \param Recibe dos numeros flotantes .
 *
 * \return Devuelve el resultado flotante de la multiplicacion entre numero1 y numero2.
 *
 */
float multiplicacion (float numero1, float numero2);


/** \brief Realiza el calculo factorial del numero1 y verifica que no sea flotante ni negativo.
 *
 * \param Recibe un numero flotante.
 *
 * \return Devuelve el resultado entero de el factorial.
 *
 */
long long int factorial(float numero1);

#endif // FUNCIONES_H_INCLUDED
