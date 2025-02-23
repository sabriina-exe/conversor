#include <stdio.h>

float kgfParaNewton() 
{
    float kgf, newtons;
    printf("Digite o valor em quilograma-forca: ");
    scanf("%f", &kgf);
    newtons = kgf * 9.80665;
    printf("%.2f kgf equivale a %.2f N\n", kgf, newtons);

    return 0;
}

float newtonParaKgf() 
{
    float newton, kgf;
    printf("Digite o valor em newton: ");
    scanf("%f", &newton);
    kgf = newton / 9.80665;
    printf("%.2f newtons equivale a %2.f kgf\n", newton, kgf);

    return 0;
}

// Funcao chamada na main pra a escolha de conversao entre unidades de medida de forca
void forca(){
    int opcao;
    printf("Escolha a conversao:\n");
    printf("1. kg/f para Newtons\n");
    printf("2. Newtons para kg/f\n");
    printf("Digite sua opcao (1 ou 2): ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        kgfParaNewton();
        break;
    case 2:
        newtonParaKgf();
        break;
    default:
        printf("Opcao invalida.\n");
    }
}