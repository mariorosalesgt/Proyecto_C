#include <stdio.h>

void convertirMoneda(int opcion, float cantidad) {
    float resultado;
    
    // Conversion de Quetzales (GTQ)
    if (opcion == 1) {
        printf("Elige la moneda a la que deseas convertir:\n");
        printf("1. Dolares (USD)\n");
        printf("2. Euros (EUR)\n");
        printf("Ingresa tu opción: ");
        int moneda;
        scanf("%d", &moneda);

        if (moneda == 1) {
            // 1 Quetzal = 0.13 USD (aproximadamente)
            resultado = cantidad * 0.13;
            printf("%.2f Quetzales equivalen a %.2f Dolares\n", cantidad, resultado);
        } else if (moneda == 2) {
            // 1 Quetzal = 0.12 EUR (aproximadamente)
            resultado = cantidad * 0.12;
            printf("%.2f Quetzales equivalen a %.2f Euros\n", cantidad, resultado);
        } else {
            printf("Opción no válida.\n");
        }
    }

    // Conversion de Dolares (USD)
    else if (opcion == 2) {
        printf("Elige la moneda a la que deseas convertir:\n");
        printf("1. Quetzales (GTQ)\n");
        printf("2. Euros (EUR)\n");
        printf("Ingresa tu opción: ");
        int moneda;
        scanf("%d", &moneda);

        if (moneda == 1) {
            // 1 USD = 7.75 GTQ (aproximadamente)
            resultado = cantidad * 7.75;
            printf("%.2f Dolares equivalen a %.2f Quetzales\n", cantidad, resultado);
        } else if (moneda == 2) {
            // 1 USD = 0.92 EUR (aproximadamente)
            resultado = cantidad * 0.92;
            printf("%.2f Dolares equivalen a %.2f Euros\n", cantidad, resultado);
        } else {
            printf("Opción no válida.\n");
        }
    }

    // Conversion de Euros (EUR)
    else if (opcion == 3) {
        printf("Elige la moneda a la que deseas convertir:\n");
        printf("1. Quetzales (GTQ)\n");
        printf("2. Dolares (USD)\n");
        printf("Ingresa tu opción: ");
        int moneda;
        scanf("%d", &moneda);

        if (moneda == 1) {
            // 1 EUR = 9.15 GTQ (aproximadamente)
            resultado = cantidad * 9.15;
            printf("%.2f Euros equivalen a %.2f Quetzales\n", cantidad, resultado);
        } else if (moneda == 2) {
            // 1 EUR = 1.09 USD (aproximadamente)
            resultado = cantidad * 1.09;
            printf("%.2f Euros equivalen a %.2f Dolares\n", cantidad, resultado);
        } else {
            printf("Opción no válida.\n");
        }
    }

    else {
        printf("Opción no válida.\n");
    }
}

int main() {
    int opcion;
    float cantidad;

    printf("Bienvenido al Conversor de Monedas\n");
    printf("Elige la moneda de origen:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dolares (USD)\n");
    printf("3. Euros (EUR)\n");
    printf("Ingresa tu opción: ");
    scanf("%d", &opcion);

    printf("Ingresa la cantidad a convertir: ");
    scanf("%f", &cantidad);

    convertirMoneda(opcion, cantidad);

    return 0;
}
