#include <stdio.h>
#include "dansk.h"

heltal række_tal[2] = {0, 1};

/**
 * Denne funktion returnere et tal i Fibbonacci sekvensen og udregner
 * det næste.
 * Fibbonacci sekvensen ser sådan ud: 
 * 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ...
 */
heltal fibbonacci_udregning(tomrum) {
    heltal returnerings_værdi = række_tal[0];
    heltal temporal_værdi = returnerings_værdi + række_tal[1];

    række_tal[0] = række_tal[1];
    række_tal[1] = temporal_værdi;

    returnér returnerings_værdi;
}

heltal hovedfunktion(heltal antal_argumenter, tegn **argumenterne) {

    for (heltal i = 0; i er_mindre_end_eller_lig TI; i += EN) {
        udskriv("%i\n", fibbonacci_udregning());
    }

    vend_tilbage_med 0;
}
