/*
Implemente uma função strreverse que inverte a ordem dos caracteres em uma cadeia.
*/

#include <stdio.h>
#include <string.h>

#include "strreverse.c"

int main(void) {
  char *texto = "Ola mundo";
  char invertido[strlen(texto)];

  strreverse(invertido, texto);

  printf("%s\n", invertido); // Deve imprimir "odnum alO";

  return 0;
}