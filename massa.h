#include <stdio.h>

// Funcao para coverter kg para arrobas
float kgParaArrobas()
{
    float kg, arrobas;
    printf("Digite o valor em kg: ");
    scanf("%f", &kg);

    arrobas = kg / 15;

    printf("%.2f Kg equivalem a %.2f Arrobas.\n", kg, arrobas);

    return 0;
}
// Funcao para coverter arrobas para kg
float arrobasParaKg()
{
    float kg, arrobas;
    printf("Digite o valor em arrobas: ");
    scanf("%f", &arrobas);

    kg = arrobas * 15.0;

    printf("%.2f Arrobas equivalem a %.2f Kg.\n", arrobas, kg);

    return 0;
}

// Funcao chamada na main pra a escolha de conversao entre unidades de medida de massa
void massa()
{
    int opcao;

    printf("Escolha a conversao:\n");
    printf("1. Kg para Arrobas\n");
    printf("2. Arrobas para Kg\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        kgParaArrobas();
        break;
    case 2:
        arrobasParaKg();
        break;
    default:
        printf("Opcao invalida.\n");
    }
}