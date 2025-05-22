#include <stdio.h>

int main() {


    char Estado1[50], Estado2[50];
    char Codigo1[50], Codigo2[50];
    char Cidade1[50], Cidade2[50];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float Pib1, Pib2;
    int PontosT1, PontosT2;
    float DensidadeP1, DensidadeP2;
    float PibPC1, PibPC2;
    float superpoder1, superpoder2;


    printf("Carta 1:\n");

    printf("Digite a sigla do Estado:\n");
    scanf("%s", &Estado1);

    printf("Digite o codigo da cidade:\n");
    scanf("%s", &Codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &Cidade1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%ld", &Populacao1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &Pib1);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &PontosT1);

    DensidadeP1 = Populacao1 / Area1;

    PibPC1 = Pib1 / Populacao1;

    superpoder1 = Populacao1 + Area1 + Pib1 + PontosT1 + PibPC1 + 1/DensidadeP1;

    printf("\n");


    printf("Carta2: \n");

    printf("digite a sigla do Estado: \n");
    scanf("%s", &Estado2);

    printf("digite o codigo da cidade: \n");
    scanf("%s", &Codigo2);

    printf("digite o nome da cidade: \n");
    scanf("%s", &Cidade2);

    printf("digite o número de habitantes da cidade: \n");
    scanf("%ld", &Populacao2);

    printf("digite a área da cidade: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &Pib2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &PontosT2);

    DensidadeP2 = Populacao2 / Area2;

    PibPC2 = Pib2 / Populacao2;

    superpoder2 = Populacao2 + Area2 + Pib2 + PontosT2 + PibPC2 + 1/DensidadeP2;

    printf("\n");


    printf("Carta 1: \n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome da cidade: %s\n", Cidade1);
    printf("Populção: %ld de habitantes\n", Populacao1);
    printf("Àrea: %.1f km²\n", Area1);
    printf("PIB: %.2f reais\n", Pib1);
    printf("Pontos turísticos: %d\n", PontosT1);
    printf("Densidade populacional: %.1f hab/km²\n", DensidadeP1);
    printf("PIB per capita: %.2f reais\n", PibPC1);
    printf("Superpoder: %.1f\n", superpoder1);
    
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("População: %ld de habitantes\n", Populacao2);
    printf("Àrea: %.1f km²\n", Area2);
    printf("PIB: %.2f reais\n", Pib2);
    printf("Pontos turísticos: %d\n", PontosT2);
    printf("Densidade populacional: %.1f Hab/km²\n", DensidadeP2);
    printf("Pib per capita: %.2f reais\n", PibPC2);
    printf("Superpoder: %.1f\n", superpoder2);

    printf("\n");

    printf("Vamos comparar?\n");

    printf("Comparação de cartas: \n");

    if (Populacao1 > Populacao2) 
    {
        printf("População: Carta 1 Venceu!\n");
    }
    else
    {
        printf("População: Carta 2 Venceu!\n");
    }
    
    if (Area1 > Area2) 
    {
        printf("Área: Carta 1 Venceu!\n");
    }
    else
    {
        printf("Área: Carta 2 Venceu!\n");
    }
    
    if (Pib1 > Pib2) 
    {
        printf("Pib: Carta 1 Venceu!\n");
    }
    else
    {
        printf("Pib: Carta 2 Venceu!\n");
    }
    
    if (PontosT1 > PontosT2) 
    {
        printf("Pontos turísticos: Carta 1 Venceu!\n");
    }
    else
    {
        printf("Pontos turísticos: Carta 2 Venceu!\n");
    }
    
    if (DensidadeP1 < DensidadeP2) 
    {
        printf("Densidade populacional: Carta 1 Venceu!\n");
    }
    else
    {
        printf("Densidade populacional: Carta 2 Venceu!\n");
    }
    
    if (PibPC1 > PibPC2) 
    {
        printf("Pib per capita: Carta 1 Venceu!\n");
    }
    else
    {
        printf("Pib per capita: Carta 2 Venceu!\n");
    }
    
    if (superpoder1 > superpoder2) 
    {
        printf("Super Poder: Carta 1 Venceu!\n");
    }
    else
    {
        printf("Super Poder: Carta 2 Venceu!\n");
    }
    

    printf("\n");

    return 0;
}
