#include <stdio.h>

// Funcao para converter celsius para fahrenheit
float celsiusFahrenheit()
{
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}

// Funcao para converter celsius para kelvin
float celsiusKelvin()
{
    float celsius, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("%.2f graus Celsius equivalem a %.2f Kelvin.\n", celsius, kelvin);

    return 0;
}

// Funcao para converter fahrenheit para celsius
float fahrenheitCelsius()
{
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", fahrenheit, celsius);

    return 0;
}

// Funcao para converter fahrenheit para kelvin
float fahrenheitKelvin()
{
    float fahrenheit, kelvin;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    kelvin = (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;

    printf("%.2f graus Fahrenheit equivalem a %.2f Kelvin.\n", fahrenheit, kelvin);

    return 0;
}

// Funcao para converter kelvin para celsius
float kelvinCelsius()
{
    float kelvin, celsius;

    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("%.2f Kelvin equivalem a %.2f graus Celsius.\n", kelvin, celsius);

    return 0;
}

// Funcao para converter kelvin para fahrenheit
float kelvinFahrenheit()
{
    float kelvin, fahrenheit;

    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &kelvin);

    fahrenheit = (kelvin - 273.15) * 9.0 / 5.0 + 32.0;

    printf("%.2f Kelvin equivalem a %.2f graus Fahrenheit.\n", kelvin, fahrenheit);

    return 0;
}

// Funcao chamada na main pra a escolha de conversao entre unidades de medida de temperatura
void temperatura()
{
    int opcao;

    printf("Escolha a conversao:\n");
    printf("1. celsius para fahrenheit\n");
    printf("2. celsius para kelvin\n");
    printf("3. fahrenheit para celsius\n");
    printf("4. fahrenheit para kelvin\n");
    printf("5. kelvin para celsius\n");
    printf("6. kelvin para fahrenheit\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        celsiusFahrenheit();
        break;
    case 2:
        celsiusKelvin();
        break;
    case 3:
        fahrenheitCelsius();
        break;
    case 4:
        fahrenheitKelvin();
        break;
    case 5:
        kelvinCelsius();
        break;
    case 6:
        kelvinFahrenheit();
        break;
    default:
        printf("Opcao invalida.\n");
    }
}