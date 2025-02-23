#include <stdio.h>

// Funcao para converter km para milhas
float kmParaMilhas()
{
    float km, milhas;

    printf("Digite a distancia em kilometros: ");
    scanf("%f", &km);

    milhas = km * 0.621371;

    printf("%.2f Km equivalem a %.2f Milhas.\n", km, milhas);

    return 0;
}

// Funcao para converter milhas para km
float milhasParaKm()
{
    float milhas, km;

    printf("Digite a distancia em milhas: ");
    scanf("%f", &milhas);

    km = milhas / 0.621371;

    printf("%.2f milhas equivalem a %.2f quilometros.\n", milhas, km);

    return 0;
}

// Funcao para converter km para leguas
float kmParaLeguas()
{
    float km, leguas;

    printf("Digite a distancia em kilometros: ");
    scanf("%f", &km);

    leguas = km * 0.207115;

    printf("%.2f km equivalem a %.2f leguas.\n", km, leguas);

    return 0;
}

// Funcao para converter leguas para km
float leguasParaKm()
{
    float leguas, km;

    printf("Digite a distancia em leguas: ");
    scanf("%f", &leguas);

    km = leguas / 0.207115;

    printf("%.2f leguas equivalem a %.2f quilometros.\n", leguas, km);

    return 0;
}

// Funcao chamada na main pra a escolha de conversao entre unidades de medida de distancia
void distancia()
{
    int opcao;

    printf("Escolha a conversao:\n");
    printf("1. Km para Milhas\n");
    printf("2. Milhas para Km\n");
    printf("3. Km para Leguas\n");
    printf("4. Leguas para Km\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        kmParaMilhas();
        break;
    case 2:
        milhasParaKm();
        break;
    case 3:
        kmParaLeguas();
        break;
    case 4:
        leguasParaKm();
        break;
    default:
        printf("Opcao invalida.\n");
    }
}