#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "dni.h"

int validar_dni(char *dni) {
    if (strlen(dni) != 8) {
        return 0;
    }

    for (int i = 0; i < 8; i++) {
        if (!isdigit(dni[i])) {
            return 0;
        }
    }

    return 1;
}
