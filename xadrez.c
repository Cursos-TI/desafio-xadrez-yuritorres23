#include <stdio.h>
int main(){
 int bispo = 5;
 int torre = 5;
 int rainha = 8;
 int cavalo = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
 printf("\n--- Movimento do Bispo ---\n");
 for (int i = 0; i <5; i++) {
    printf("Cima\n");
    printf("Direita\n");
 }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
 printf("\n--- Movimento da Torre ---\n");
 int i = 0;
 while (i < torre){
  printf("Direita\n");
  i++;
 }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
 printf("\n--- Movimento da rainha ---\n");
 int j = 0;
 do {
    printf("Esquerda\n");
    j++;
 }while (j < rainha);
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n--- Movimento do cavalo ---\n");

   while(cavalo)
   {
      for (int i = 0; i < 2; i++)
      {
         printf("baixo\n");
      }
        printf("esquerda\n");

        cavalo = 0;
   }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
