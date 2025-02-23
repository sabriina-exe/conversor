#include <stdio.h>

// Funcao para converter segundos para minutos
float segundosParaMinutos()
{
    float segundos, minutos;
    printf("Digite o valor em segundos: ");
    scanf("%f", &segundos);

    minutos = segundos / 60.0;

    printf("%.1f segundos equivalem a %.1f minutos.\n", segundos, minutos);

    return 0;
}

// Funcao para converter segundos para horas
float segundosParaHoras()
{
    float segundos, horas;
    printf("Digite o valor em segundos: ");
    scanf("%f", &segundos);

    horas = segundos / 3600.0;

    printf("%.1f segundos equivalem a %.1f horas.\n", segundos, horas);

    return 0;
}

// Funcao para converter segundos para dias
float segundosParaDias()
{
    float segundos, dias;
    printf("Digite o valor em segundos: ");
    scanf("%f", &segundos);

    dias = segundos / 86400.0;

    printf("%.1f segundos equivalem a %.1f dias.\n", segundos, dias);

    return 0;
}

// Funcao para converter minutos para segundos
float minutosParaSegundos()
{
    float minutos, segundos;
    printf("Digite o valor em minutos: ");
    scanf("%f", &minutos);

    segundos = minutos * 60.0;

    printf("%.1f minutos equivalem a %.1f segundos.\n", minutos, segundos);

    return 0;
}

// Funcao para converter minutos para horas
float minutosParaHoras()
{
    float minutos, horas;
    printf("Digite o valor em minutos: ");
    scanf("%f", &minutos);

    horas = minutos / 60.0;

    printf("%.1f minutos equivalem a %.1f horas.\n", minutos, horas);

    return 0;
}

// Funcao para converter minutos para dias
float minutosParaDias()
{
    float minutos, dias;
    printf("Digite o valor em minutos: ");
    scanf("%f", &minutos);

    dias = minutos / 1440.0;

    printf("%.1f minutos equivalem a %.1f dias.\n", minutos, dias);

    return 0;
}

// Funcao para converter horas para segundos
float horasParaSegundos()
{
    float horas, segundos;
    printf("Digite o valor em horas: ");
    scanf("%f", &horas);

    segundos = horas * 3600.0;

    printf("%.1f horas equivalem a %.1f segundos.\n", horas, segundos);

    return 0;
}

// Funcao para converter horas para minutos
float horasParaMinutos()
{
    float horas, minutos;
    printf("Digite o valor em horas: ");
    scanf("%f", &horas);

    minutos = horas * 60.0;

    printf("%.1f horas equivalem a %.1f minutos.\n", horas, minutos);

    return 0;
}

// Funcao para converter horas para dias
float horasParaDias()
{
    float horas, dias;
    printf("Digite o valor em horas: ");
    scanf("%f", &horas);

    dias = horas / 24.0;

    printf("%.1f horas equivalem a %.1f dias.\n", horas, dias);

    return 0;
}

// Funcao para converter dias para segundos
float diasParaSegundos()
{
    float dias, segundos;
    printf("Digite o valor em dias: ");
    scanf("%f", &dias);

    segundos = dias * 86400.0;

    printf("%.1f dias equivalem a %.1f segundos.\n", dias, segundos);

    return 0;
}

// Funcao para converter dias para minutos
float diasParaMinutos()
{
    float dias, minutos;
    printf("Digite o valor em dias: ");
    scanf("%f", &dias);

    minutos = dias * 1440.0;

    printf("%.1f dias equivalem a %.1f minutos.\n", dias, minutos);

    return 0;
}

// Funcao para converter dias para horas
float diasParaHoras()
{
    float dias, horas;
    printf("Digite o valor em dias: ");
    scanf("%f", &dias);

    horas = dias * 24.0;

    printf("%.1f dias equivalem a %.1f horas.\n", dias, horas);

    return 0;
}

// Funcao chamada na main pra a escolha de conversao entre unidades de medida de tempo
void tempo()
{
    int opcao;

    printf("Escolha a conversao:\n");
    printf("1. segundos para minutos\n");
    printf("2. segundos para horas\n");
    printf("3. segundos para dias\n");
    printf("4. minutos para segundos\n");
    printf("5. minutos para horas\n");
    printf("6. minutos para dias\n");
    printf("7. horas para segundos\n");
    printf("8. horas para minutos\n");
    printf("9. horas para dias\n");
    printf("10. dias para segundos\n");
    printf("11. dias para minutos\n");
    printf("12. dias para horas\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        segundosParaMinutos();
        break;
    case 2:
        segundosParaHoras();
        break;
    case 3:
        segundosParaDias();
        break;
    case 4:
        minutosParaSegundos();
        break;
    case 5:
        minutosParaHoras();
        break;
    case 6:
        minutosParaDias();
        break;
    case 7:
        horasParaSegundos();
        break;
    case 8:
        horasParaMinutos();
        break;
    case 9:
        horasParaDias();
        break;
    case 10:
        diasParaSegundos();
        break;
    case 11:
        diasParaMinutos();
        break;
    case 12:
        diasParaHoras();
        break;
    default:
        printf("Opcao invalida.\n");
    }
}