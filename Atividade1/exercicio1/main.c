/*
A biblioteca padrão da linguagem C possui muito poucas funções para manipulação de cadeias de caracteres. 
Uma das funções muito comumente utilizadas em manipulação de strings é a função trim, que remove espaços e 
tabulações no início e fim de uma cadeia de caracteres. Essa função é geralmente utilizada para "corrigir" 
eventuais erros na entrada de dados de usuário.

Assim sendo, a aplicação da função na cadeia de caracteres "      Estruturas de Dados 1    " retornaria 
uma cadeia de caracteres "Estruturas de Dados 1"

Escreva uma função strtrim que recebe um ponteiro para uma cadeia de caracteres destino e um ponteiro para 
uma cadeia de caracteres de origem e escreva no destino a mesma cadeia sem espaços no início e fim da cadeia. 
Considere como espaço em branco além do caracter de espaço os caracteres '\t', '\n', '\r'

Em seguida, escreva um programa que leia uma sequencia de linhas de texto da entrada padrão e imprima o 
resultado da aplicação da função strtrim em cada linha.
*/

#include <stdio.h>
#include <stdlib.h>
#include "strtrim.c"

int main(void) {
  char *entrada[50];

  scanf("%s*c", entrada);

  printf("Entrada: %s - %u\n", entrada, strlen(entrada));
  strtrim(entrada, entrada);
  printf("Saída: %s - %u\n", entrada, strlen(entrada));

  return 0;
}