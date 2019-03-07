//Exemplo: Abrindo, gravando e fechando arquivo
#include <stdio.h>

int main(void)
{
  FILE *pont_arq; // cria variável ponteiro para o arquivo
  char palavra[20]; // variável do tipo string

  //abrindo o arquivo com tipo de abertura w
  pont_arq = fopen("teste.txt", "w");

  //testando se o arquivo foi realmente criado
  if(pont_arq == NULL)
  {
     printf("Erro na abertura do arquivo!");
     return 1;
  }

  printf("Escreva uma palavra para testar gravacao de arquivo: ");
  scanf("%s", palavra);

  //usando fprintf para armazenar a string no arquivo
  fprintf(pont_arq, "%s", palavra);

  //usando fclose para fechar o arquivo
  fclose(pont_arq);

  printf("Dados gravados com sucesso!");

  return 0;
}
