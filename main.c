/*
 * Este programa le preguntara al usuario el mes y el año
 * y le responderacon los dias que tiene tal mes.
 * Los meses se escriben con numeros del 1 al 12,
 * y el año puede ser positivo o negativo.
 * Si el año es divisible entre cuatro y no es divisible entre 100
 * o es divisible entre 400, se tomara como año bisiesto y
 * Febrero tendra 29 dias, de lo contrario tendra 28.
 *
 * Autor: Jonathan Nuñez de Caceres.
 * Fecha: 30 de Agosto, 2018.
 * Correo: A01411277@itesm.mx
 */

#include <stdio.h>

int main() {
    // Las variables que guardaran el mes y el año. El año puede ser negativo.
    unsigned int month;
    signed int year;

    // Se le pide al usuario que ingrese el mes y el año.
    // Estos se pueden poner separados por un espacio o en distintas lineas.
    printf("Enter a month and a year (separated by a space):");
    scanf("%i%i", &month, &year);

    // Aqui se evalua que se hara dependiendo del mes ingresado.
    switch(month) {
        // Si el mes es Enero, Marzo, Mayo, Julio, Agosto, Octubre o Diciembre
        // el programa mandara el mensaje que el mes tiene 31 dias.
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("This month has 31 days.");
            break;

        // Si el mes es Abril, Junio, Septiembre o Nomviembre
        // el programa mandara el mensaje que el mes tiene 30 dias.
        case 4:
        case 6:
        case 9:
        case 11:
            printf("This month has 30 days.");
            break;

        // Este es el caso de Febrero.
        case 2:
            // Aqui se evalua si el año es bisiesto o no.
            if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                // Si el año es bisiesto se imprime que el mes tiene 29 dias.
                printf("This month has 29 days.");
            }
            else {
                printf("This month has 28 days.");
                // Si el año no es bisiesto se imprime que el mes tiene 28 dias.
            }
            break;

        // Si ninguno de los casos se cumple el programa mandara un
        // mensaje diciendo que el mes no es valido.
        default:
            printf("This is not a month.");
            break;
    }

    // El programa termina.
    return 0;
}