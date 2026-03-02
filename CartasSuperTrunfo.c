#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    //--------------------------------------------------------- Carta 1 ----------------------------------------------------------------------------

    // Área para definição das variáveis para armazenar as propriedades das cidades

    char stateCard1;                                                            // Declara a variável para armazenar o valor de entrada do Estado
    char codeCard1[4];                                                          // Declara a variável para armazenar o valor de entrada do Código
    char cityNameCard1[100];                                                    // Declara a variável para armazenar o valor de entrada do Nome da Cidade
    int numberOfTouristAttractionsCard1;                                        // Declara as variáveis para armazenar os valores de entrada de Pontos Turísticos
    unsigned long int populationCard1;                                          // Declara as variáveis para armazenar os valores de entrada da Populaçã
    float areaCard1, pibCard1, pibPerCapita1, populationDensity1, superPower1;  // Declara as variáveis para armazenar os valores de entrada da Área, PIB, Densidade Populacional, PIB per Capita e super poder


    //--------------------------------------------------------- Carta 2 ----------------------------------------------------------------------------

    char stateCard2;                                                            // Declara a variável para armazenar o valor de entrada do Estado
    char codeCard2[4];                                                          // Declara a variável para armazenar o valor de entrada do Código
    char cityNameCard2[100];                                                    // Declara a variável para armazenar o valor de entrada do Nome da Cidade
    int numberOfTouristAttractionsCard2;                                        // Declara as variáveis para armazenar os valores de entrada de Pontos Turísticos
    unsigned long int populationCard2;                                          // Declara as variáveis para armazenar os valores de entrada da Populaçã
    float areaCard2, pibCard2, pibPerCapita2, populationDensity2, superPower2;  // Declara as variáveis para armazenar os valores de entrada da Área, PIB, Densidade Populacional, PIB per Capita e super poder


    // Área para entrada de dados

    //--------------------------------------------------------- Carta 1 ----------------------------------------------------------------------------

    printf("----------------------------------------- Inciando cadastro da carta 1 ------------------------------------------------------\n");
    // Recebe o valor de entrada informado pelo usuário via console e armazena na variavel stateCard1
    printf("Informe a letra de 'A' a 'H' que representa o Estado: ");
    scanf(" %c", &stateCard1);

    // Recebe o valor de entrada informado pelo usuário via console e armazena na variavel codeCard1
    printf("Informe o código da carta(letra informada no campo anterior + número inteiro de 01 à 04): ");
    scanf("%s", codeCard1);

    // Recebe o valor de entrada informado pelo usuário via console e armazena na variavel cityNameCard1
    printf("Informe o nome da cidade: ");
    scanf("%s", cityNameCard1);

    // Recebe o valor de entrada informado pelo usuário via console e armazena na variavel populationCard1
    printf("Informe o número de habitantes da cidade: ");
    scanf("%li", &populationCard1);

    // Recebe o valor de entrada informado pelo usuário via console e armazena na variavel areaCard1
    printf("Informe a área da cidade(km²): ");
    scanf("%f", &areaCard1);

    // Recebe o valor de entrada informado pelo usuário via console e armazena na variavel pibCard1
    printf("Informe o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pibCard1);

    // Recebe o valor de entrada informado pelo usuário via console e armazena na variavel numberOfTouristAttractionsCard1
    printf("Informe o número de ponto turísticos da cidade: ");
    scanf("%i", &numberOfTouristAttractionsCard1);

    printf("\n\nCadastro Finalizado com Sucesso!\n\n");

    // Calculo da Densidade Populacional e PIB per Capita
    populationDensity1 = (float) populationCard1/areaCard1;
    pibPerCapita1 = (float) pibCard1/populationCard1;

    //--------------------------------------------------------- Carta 2 ----------------------------------------------------------------------------

    printf("----------------------------------------- Inciando cadastro da carta 2 ------------------------------------------------------\n");
    // Recebe o valor de entrada informado pelo usuário via console e armazena na variavel stateCard2
    printf("Informe a letra de 'A' a 'H' que representa o Estado: ");
    scanf(" %c", &stateCard2);

    // Recebe o valor de entrada informado pelo usuário via console e armazena na variavel codeCard2
    printf("Informe o código da carta(letra informada no campo anterior + número inteiro de 01 à 04): ");
    scanf("%s", codeCard2);

    // Recebe o valor de entrada informado pelo usuário via console e armazena na variavel cityNameCard2
    printf("Informe o nome da cidade: ");
    scanf("%s", cityNameCard2);

    // Recebe o valor de entrada informado pelo usuário via console e armazena na variavel populationCard2
    printf("Informe o número de habitantes da cidade: ");
    scanf("%li", &populationCard2);

    // Recebe o valor de entrada informado pelo usuário via console e armazena na variavel areaCard2
    printf("Informe a área da cidade(km²): ");
    scanf("%f", &areaCard2);

    // Recebe o valor de entrada informado pelo usuário via console e armazena na variavel pibCard2
    printf("Informe o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pibCard2);

    printf("Informe o número de ponto turísticos da cidade: ");
    scanf("%i", &numberOfTouristAttractionsCard2);

    // Recebe o valor de entrada informado pelo usuário via console e armazena na variavel numberOfTouristAttractionsCard2
    printf("\n\nCadastro Finalizado com Sucesso!\n\n");

    // Calculo da Densidade Populacional e PIB per Capita
    populationDensity2 = (float) populationCard2/areaCard2;
    pibPerCapita2 = (float) pibCard2/populationCard2;

    // Área para exibição dos dados da cidade

    //--------------------------------------------------------- Carta 1 ----------------------------------------------------------------------------

    printf("---------------------------------------- Informações cadastradas da Carta 1 ------------------------------------------------\n");
    printf("Estado: %c\n", stateCard1);                                             // Exibe o Estada cadastrado pelo usuário na variavel stateCard1
    printf("Código: %s\n", codeCard1);                                              // Exibe o Código cadastrado pelo usuário na variavel codeCard1
    printf("Nome da Cidade: %s\n", cityNameCard1);                                  // Exibe o Nome da Cidade cadastrado pelo usuário na variavel cityNameCard1
    printf("População: %li Habitantes\n", populationCard1);                         // Exibe a População cadastrado pelo usuário na variavel populationCard1
    printf("Área: %.2fkm²\n", areaCard1);                                           // Exibe a Área(km²) cadastrado pelo usuário na variavel areaCard1
    printf("PIB: %.2f\n", pibCard1);                                                // Exibe o PIB cadastrado pelo usuário na variavel pibCard1
    printf("Número de Pontos Turísticos: %i\n", numberOfTouristAttractionsCard1);   // Exibe o Número de Pontos Turísticos cadastrado pelo usuário na variavel numberOfTouristAttractionsCard1
    printf("Densidade Populacional: %.2f hab/km²\n", populationDensity1);           // Exibe a Densidade Populacional
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);                          // Exibe o PIB per Capita

    printf("\n\n");

    //--------------------------------------------------------- Carta 2 ----------------------------------------------------------------------------
    
    printf("---------------------------------------- Informações cadastradas da Carta 2 ------------------------------------------------\n");
    printf("Estado: %c\n", stateCard2);                                             // Exibe o Estada cadastrado pelo usuário na variavel stateCard2
    printf("Código: %s\n", codeCard2);                                              // Exibe o Código cadastrado pelo usuário na variavel codeCard2
    printf("Nome da Cidade: %s\n", cityNameCard2);                                  // Exibe o Nome da Cidade cadastrado pelo usuário na variavel cityNameCard2
    printf("População: %li Habitantes\n", populationCard2);                         // Exibe a População cadastrado pelo usuário na variavel populationCard2
    printf("Área: %.2fkm²\n", areaCard2);                                           // Exibe a Área(km²) cadastrado pelo usuário na variavel areaCard2
    printf("PIB: %.2f\n", pibCard2);                                                // Exibe o PIB cadastrado pelo usuário na variavel pibCard2
    printf("Número de Pontos Turísticos: %i\n", numberOfTouristAttractionsCard2);   // Exibe o Número de Pontos Turísticos cadastrado pelo usuário na variavel numberOfTouristAttractionsCard2
    printf("Densidade Populacional: %.2f hab/km²\n", populationDensity2);           // Exibe a Densidade Populacional
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);                          // Exibe o PIB per Capita

    printf("\n\n");

    printf("---------------------------------------- Calculando super poder da Carta 1 ------------------------------------------------\n");
    superPower1 = (numberOfTouristAttractionsCard1+populationCard1+areaCard1+pibCard1+pibPerCapita1+(1/populationDensity1));
    printf("Carta 1 - Super Poder: %.2f\n", superPower1);
    printf("\n\n");
    
    printf("---------------------------------------- Calculando super poder da Carta 2 ------------------------------------------------\n");
    superPower2 = (numberOfTouristAttractionsCard2+populationCard2+areaCard2+pibCard2+pibPerCapita2+(1/populationDensity2));
    printf("Carta 2 - Super Poder: %.2f\n", superPower2);
    printf("\n\n");

    printf("---------------------------------------- Comparando Cartas ... ------------------------------------------------\n\n");

    // Inicia a construção do menu interativo, mostrando as opções do menu na tela 
    unsigned int option;
    printf("Escolha qual atributo das cartas deseja comparar: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%u", &option);

    printf("Carta 1 - %s | Carta 2 - %s\n", cityNameCard1, cityNameCard2);
    
    // Criação do menu interativo com o switch
    switch (option) {
    case 1:
        printf("Carta 1 - População: %li Habitantes | Carta 2 - População: %li Habitantes\n", populationCard1, populationCard2);
        if (populationCard1 > populationCard2) {
            printf("Carta 1 Venceu!\n");
        } else if (populationCard1 == populationCard2) {
            printf("Empate!\n");
        } else {
            printf("Carta 2 venceu!\n");
        }
        break;
    case 2:
        printf("Carta 1 - Área: %.2f km² | Carta 2 - Área: %.2f km²\n", areaCard1, areaCard2);
        if (areaCard1 > areaCard2) {
            printf("Carta 1 Venceu!\n");
        } else if (areaCard1 == areaCard2) {
            printf("Empate!\n");
        } else {
            printf("Carta 2 venceu!\n");
        }
        break;
    case 3:
        printf("Carta 1 - PIB: %.2f | Carta 2 - PIB: %.2f\n", pibCard1, pibCard2);
        if (pibCard1 > pibCard2) {
            printf("Carta 1 Venceu!\n");
        } else if (pibCard1 == pibCard2) {
            printf("Empate!\n");
        } else {
            printf("Carta 2 venceu!\n");
        }
        break;
    case 4:
        printf("Carta 1 - Pontos Turísticos: %i | Carta 2 - Pontos Turísticos: %i\n", numberOfTouristAttractionsCard1, numberOfTouristAttractionsCard2);
        if (numberOfTouristAttractionsCard1 > numberOfTouristAttractionsCard2) {
            printf("Carta 1 Venceu!\n");
        } else if (numberOfTouristAttractionsCard1 == numberOfTouristAttractionsCard2) {
            printf("Empate!\n");
        } else {
            printf("Carta 2 venceu!\n");
        }
        break;
    case 5:
        printf("Carta 1 - Densidade Populacional: %.2f hab/km² | Carta 2 - Densidade Populacional: %.2f hab/km²\n", populationDensity1, populationDensity2);
        if (populationDensity1 < populationDensity2) {
            printf("Carta 1 Venceu!\n");
        } else if (populationDensity1 == populationDensity2) {
            printf("Empate!\n");
        } else {
            printf("Carta 2 venceu!\n");
        }
        break;
    case 6:
        printf("Carta 1 - PIB per Capita: R$ %.2f | Carta 2 - PIB per Capita: R$ %.2f\n", pibPerCapita1, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2) {
            printf("Carta 1 Venceu!\n");
        } else if (pibPerCapita1 == pibPerCapita2) {
            printf("Empate!\n");
        } else {
            printf("Carta 2 venceu!\n");
        }
        break;
    case 7:
        printf("Carta 1 - Super Poder: %.2f | Carta 2 - Super Poder: %.2f\n", superPower1, superPower2);
        if (superPower1 > superPower2) {
            printf("Carta 1 Venceu!\n");
        } else if (superPower1 == superPower2) {
            printf("Empate!\n");
        } else {
            printf("Carta 2 venceu!\n");
        }
        break;
    default:
        printf("Opção inválida!");
        break;
    }
    
    return 0;
} 
