#include <stdio.h>
#include "dni.h"

int main() {
    char dni[9];
    printf("Introduce un DNI de 8 dígitos: ");
    scanf("%s", dni);

    if (validar_dni(dni)) {
        printf("DNI válido.\n");
    } else {
        printf("DNI inválido.\n");
    }

    return 0;
}

