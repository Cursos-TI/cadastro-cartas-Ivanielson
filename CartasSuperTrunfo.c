#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    //--------------------------------------------------------- Carta 1 ----------------------------------------------------------------------------

    // Área para definição das variáveis para armazenar as propriedades das cidades
    char stateCard1; // Declara a variável para armazenar o valor de entrada do Estado
    char codeCard1[4]; // Declara a variável para armazenar o valor de entrada do Código
    char cityNameCard1[100]; // Declara a variável para armazenar o valor de entrada do Nome da Cidade
    int populationCard1, numberOfTouristAttractionsCard1; // Declara as variáveis para armazenar os valores de entrada da População e Número de Pontos Turísticos
    float areaCard1, pibCard1; // Declara as variáveis para armazenar os valores de entrada da Área e PIB

    // Área para entrada de dados
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
    scanf("%i", &populationCard1);

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


    // Área para exibição dos dados da cidade
    printf("---------------------------------------- Informações cadastradas da Carta 1 ------------------------------------------------\n");
    printf("Estado: %c\n", stateCard1); // Exibe o Estada cadastrado pelo usuário na variavel stateCard1
    printf("Código: %s\n", codeCard1); // Exibe o Código cadastrado pelo usuário na variavel codeCard1
    printf("Nome da Cidade: %s\n", cityNameCard1); // Exibe o Nome da Cidade cadastrado pelo usuário na variavel cityNameCard1
    printf("População: %i Habitantes\n", populationCard1); // Exibe a População cadastrado pelo usuário na variavel populationCard1
    printf("Área: %.2fkm²\n", areaCard1); // Exibe a Área(km²) cadastrado pelo usuário na variavel areaCard1
    printf("PIB: %.2f\n", pibCard1); // Exibe o PIB cadastrado pelo usuário na variavel pibCard1
    printf("Número de Pontos Turísticos: %i\n", numberOfTouristAttractionsCard1);  // Exibe o Número de Pontos Turísticos cadastrado pelo usuário na variavel numberOfTouristAttractionsCard1

    printf("\n\n");

    //--------------------------------------------------------- Carta 2 ----------------------------------------------------------------------------

    // Área para definição das variáveis para armazenar as propriedades das cidades
    char stateCard2; // Declara a variável para armazenar o valor de entrada do Estado
    char codeCard2[4]; // Declara a variável para armazenar o valor de entrada do Código
    char cityNameCard2[100]; // Declara a variável para armazenar o valor de entrada do Nome da Cidade
    int populationCard2, numberOfTouristAttractionsCard2; // Declara as variáveis para armazenar os valores de entrada da População e Número de Pontos Turísticos
    float areaCard2, pibCard2; // Declara as variáveis para armazenar os valores de entrada da Área e PIB

    // Área para entrada de dados
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
    scanf("%i", &populationCard2);

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

    // Área para exibição dos dados da cidade
    printf("---------------------------------------- Informações cadastradas da Carta 2 ------------------------------------------------\n");
    printf("Estado: %c\n", stateCard2); // Exibe o Estada cadastrado pelo usuário na variavel stateCard2
    printf("Código: %s\n", codeCard2); // Exibe o Código cadastrado pelo usuário na variavel codeCard2
    printf("Nome da Cidade: %s\n", cityNameCard2); // Exibe o Nome da Cidade cadastrado pelo usuário na variavel cityNameCard2
    printf("População: %i Habitantes\n", populationCard2); // Exibe a População cadastrado pelo usuário na variavel populationCard2
    printf("Área: %.2fkm²\n", areaCard2); // Exibe a Área(km²) cadastrado pelo usuário na variavel areaCard2
    printf("PIB: %.2f\n", pibCard2); // Exibe o PIB cadastrado pelo usuário na variavel pibCard2
    printf("Número de Pontos Turísticos: %i\n", numberOfTouristAttractionsCard2); // Exibe o Número de Pontos Turísticos cadastrado pelo usuário na variavel numberOfTouristAttractionsCard2

    printf("\n\n");

    return 0;
} 
