#include <stdio.h>

int main() {
  int opt;

  do {
    printf("\n _-_-_-_-_-_-_-_ MENU _-_-_-_-_-_-_-_-\n");
    printf("| 1 . Questões de soma                 |\n");
    printf("| 2 . Questões de Lógica               |\n");
    printf("| 3 . Medir o índice de massa corporal |\n");
    printf("| 4 . Finalizar Program                |\n");
    printf(" -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
    printf("\nEscolha uma opção: ");
    scanf("%d", &opt);

    switch (opt) {
    case 1:
      // Código para questões de soma
      printf("Questões de soma selecionadas.\n");
      break;
    case 2:
      // Código para questões de Lógica
      printf("Questões de Lógica selecionadas.\n");
      break;
    case 3:
      // Código para medir o índice de massa corporal
      printf("Medir o índice de massa corporal selecionado.\n");
      break;
    case 4:
      printf("Finalizar Programa.\n");
      break;
    default:
      printf("Opção inválida.\n");
      break;
    }
  } while (opt != 4);

  printf("Programa finalizado.\n");
  return 0;
}
