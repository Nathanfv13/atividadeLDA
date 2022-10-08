// Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o correspondente em Celsius e em Kelvin

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit, celsius, kelvin;

    printf("Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // calcular celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // calcular kelvin
    kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;

    printf("Celsius: %f", celsius);
    printf("\nKelvin: %f", kelvin);

    return 0;
}
