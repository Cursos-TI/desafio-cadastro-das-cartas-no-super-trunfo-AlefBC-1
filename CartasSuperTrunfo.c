// Desafio Super Trunfo - Países (Cartas de Cidades)

int main() {
    // Variáveis da Carta 1
    char estado1, codigo1[5], cidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densPop1, pibCap1, superPoder1;

    // Variáveis da Carta 2
    char estado2, codigo2[5], cidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densPop2, pibCap2, superPoder2;

    // Entrada de dados da Carta 1
    printf("Digite as informações da carta 1!\n");
    printf("Qual o estado? (De A a H)\n");
    scanf(" %c", &estado1);
    printf("Qual o código da cidade?\n");
    scanf(" %s", codigo1);
    getchar();
    printf("Qual a cidade?\n");
    scanf(" %[^\n]", cidade1);
    printf("Qual a população?\n");
    scanf(" %lu", &populacao1);
    printf("Quantos pontos turísticos tem?\n");
    scanf(" %d", &pontosTuristicos1);
    printf("Qual a área (km²)?\n");
    scanf(" %f", &area1);
    printf("Qual o PIB (em bilhões)?\n");
    scanf(" %f", &pib1);

    // Cálculos Carta 1
    densPop1 = populacao1 / area1;
    pibCap1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibCap1 + (1.0 / densPop1);

    // Entrada de dados da Carta 2
    printf("\nDigite as informações da carta 2!\n");
    printf("Qual o estado? (De A a H)\n");
    scanf(" %c", &estado2);
    printf("Qual o código da cidade?\n");
    scanf(" %s", codigo2);
    getchar();
    printf("Qual a cidade?\n");
    scanf(" %[^\n]", cidade2);
    printf("Qual a população?\n");
    scanf(" %lu", &populacao2);
    printf("Quantos pontos turísticos tem?\n");
    scanf(" %d", &pontosTuristicos2);
    printf("Qual a área (km²)?\n");
    scanf(" %f", &area2);
    printf("Qual o PIB (em bilhões)?\n");
    scanf(" %f", &pib2);

    // Cálculos Carta 2
    densPop2 = populacao2 / area2;
    pibCap2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibCap2 + (1.0 / densPop2);

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da cidade: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Área (em km²): %.2f\n", area1);
    printf("PIB (em bilhões): %.2f\n", pib1);
    printf("Densidade Populacional: %.2f\n", densPop1);
    printf("PIB per Capita: %.6f\n", pibCap1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Área (em km²): %.2f\n", area2);
    printf("PIB (em bilhões): %.2f\n", pib2);
    printf("Densidade Populacional: %.2f\n", densPop2);
    printf("PIB per Capita: %.6f\n", pibCap2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação de Atributos
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densPop1 < densPop2);  // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibCap1 > pibCap2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}