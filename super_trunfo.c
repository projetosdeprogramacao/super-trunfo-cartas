#include <stdio.h>

int main() {
   // Carta 1
   Char código1 [4];
   int populacao1;
   float area1, pib1;
   int pontos_turisticos1;


   //Carta 2 
   char codigo2 [4];
   int populacao2;
   float area2, pib2;

   //Leitura da carta 1
    printf("Cadastro da Carta 1: \n");
    printf("Código (ex: A01): ");
    scanf("%s" , codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //Leitura da carta 2 
    printf("\nCadastro da Carta 2:\n");
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
