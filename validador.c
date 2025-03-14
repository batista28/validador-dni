#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Función que valida si un DNI es un número de 8 dígitos
int validar_dni(const char *dni) {
    if (strlen(dni) != 8) return 0; // Debe tener exactamente 8 dígitos
    
    for (int i = 0; i < 8; i++) {
        if (!isdigit(dni[i])) return 0; // Verifica que todos sean dígitos
    }
    return 1; // DNI válido
}

int main() {
    char dni[10];
    printf("Ingrese un DNI: ");
    scanf("%s", dni);
    
    if (validar_dni(dni)) {
        printf("DNI válido.\n");
    } else {
        printf("DNI inválido. Debe contener 8 dígitos numéricos.\n");
    }
    
    return 0;
}
