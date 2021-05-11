#include <stdio.h>
#include "dansk.h"


heltal hovedfunktion(heltal antal_program_argumenter, tegn **program_argumenterne) {
    heltal program_status = PROGRAM_SUCCES;

    hvis ( antal_program_argumenter er_større_end_eller_lig TO ) {
        udskriv("Hej %s!\n", program_argumenterne[1]);
    } ellers {
        udskriv("Dig kender jeg ikke.\n");
        program_status = PROGRAM_FIASKO;
    }

    returnér program_status;
}