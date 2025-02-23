#include <stdio.h>

// Função para converter km/h para m/s
float kmhParaMs()
{
    float kmh, ms;
    printf("Digite a velocidade: ");
    scanf("%f", &kmh);
    ms = kmh / 3.6;
    printf("%.f km/h equivalem a %.f m/s\n", kmh, ms);

    return 0;
}

// Função para converter m/s para km/h
float msParaKmh()
{
    float kmh, ms;
    printf("Digite a velocidade: ");
    scanf("%f", &ms);
    kmh = ms * 3.6;
    printf("%.f m/s equivalem a %.f km/h\n", ms, kmh);

    return 0;
}

// Funcao chamada na main pra a escolha de conversao entre unidades de medida de velocidade
void velocidade()
{
    int opcao;
    printf("Escolha a conversao:\n");
    printf("1. km/h para m/s\n");
    printf("2. m/s para km/h\n");
    printf("Digite sua opcao (1 ou 2): ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        kmhParaMs();
        break;
    case 2:
        msParaKmh();
        break;
    default:
        printf("Opcao invalida.\n");
    }
}