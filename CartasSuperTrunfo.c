#include <stdio.h>

// Definição da estrutura (struct) para representar a carta da cidade
typedef struct {
    char nome[50];       // Nome da cidade (string)
    int populacao;       // População (inteiro)
    float area_km2;      // Área em km² (ponto flutuante)
    int indice_trunfo;   // Um valor para a disputa (ex: 1 a 100)
} CartaCidade;

int main() {
    
    // Área para definição das variáveis para armazenar as propriedades das cidades
    CartaCidade minha_carta; // <--- Mova esta linha para cá (Linha 11)

    // Área para entrada de dados
    printf("--- Cadastro de Carta Super Trunfo ---\n");
    
    // 1. Entrada do Nome
    printf("Digite o nome da cidade: ");
    scanf("%s", minha_carta.nome); 
    
    // 2. Entrada da População
    printf("Digite a população: ");
    scanf("%d", &minha_carta.populacao); 
    
    // 3. Entrada da Área
    printf("Digite a área em km²: ");
    
    // 4. Entrada do Índice de Trunfo
    printf("Digite o Indice de Trunfo (1 a 100): ");
    scanf("%d", &minha_carta.indice_trunfo);
    
    // Área para exibição dos dados da cidade
    printf("\n==================================\n");
    printf("         FICHA DA CARTA           \n");
    printf("==================================\n");
    printf("Nome da Cidade: %s\n", minha_carta.nome);
    printf("População: %d habitantes\n", minha_carta.populacao);
    printf("Área Total: %.2f km²\n", minha_carta.area_km2);
    printf("Índice Trunfo: %d\n", minha_carta.indice_trunfo);
    printf("==================================\n");

    return 0;
    // ... e aqui a linha que você moveu não estará mais
}
