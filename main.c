#include "temperatura.h"
#include "distancia.h"
#include "massa.h"
#include "tempo.h"
#include "forca.h"
#include "velocidade.h"

void conversao()
{
    int valorMedida;
    printf("SISTEMA DE CONVERSAO DE MEDIDAS: \n");
    printf("Opcoes disponiveis para conversao:\n");
    printf("1. Conversao de temperatura\n");
    printf("2. Conversao de distancia\n");
    printf("3. Conversao de massa\n");
    printf("4. Conversao de tempo\n");
    printf("5. Conversao de forca\n");
    printf("6. Conversao de velocidade\n");
    printf("Digite o valor da conversao desejada: ");
    scanf("%d", &valorMedida);

    switch (valorMedida)
    {
    case 1:
        temperatura();
        break;
    case 2:
        distancia();
        break;
    case 3:
        massa();
        break;
    case 4:
        tempo();
        break;
    case 5:
        forca();
        break;
    case 6:
        velocidade();
        break;
    default:
        printf("Opcao invalida");
        break;
    }
}

int main()
{
    int continuar;
    do
    {
        conversao();
        printf("Deseja continuar convertendo? (Digite 1 para continuar ou outro valor para sair): ");
        scanf("%d", &continuar);
    } while (continuar == 1);

    return 0;
}