#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fptr; /* Cria um ponteiro para o tipo arquivo */
  char a;

  /* Cria um arquivo com nome "teste" do tipo "w", 
   (Cria um arquivo vazio para escrita. Se já havia o arquivo, ele é perdido.) */

  if ((fptr = fopen("teste.txt", "w")) == NULL)
   { printf("\n Erro na abertura do arquivo"); exit(1);}

  /* Utiliza a função (fputc,'x',ponteiro_para_arquivo) , 
     para escrever no arquivo */
  else
  {
    fputc('F', fptr);
    fputc('e', fptr);
    fputc('r', fptr);
    fputc('n', fptr);
    fputc('a', fptr);
    fputc('n', fptr);
    fputc('d', fptr);
    fputc('o', fptr);
  }
  /* Utiliza a função fclose(ponteiro_para_arquivo),
       para fechar o arquivo */

  fclose(fptr);

  /* Abre  um arquivo com nome "teste" do tipo "a", 
   (Adiciona no final do arquivo. Se o arquivo não existir, a função o cria.) */

  if ((fptr = fopen("teste.txt", "a")) == NULL)
    { printf("\n Erro na abertura do arquivo"); exit(1);}
  else
  {
    fputc(' ', fptr);
    fputc('A', fptr);
    fputc('l', fptr);
    fputc('b', fptr);
    fputc('u', fptr);
    fputc('q', fptr);
    fputc('u', fptr);
    fputc('e', fptr);
    fputc('r', fptr);
    fputc('q', fptr);
    fputc('u', fptr);
    fputc('e', fptr);
  }
  fclose(fptr);

  if ((fptr = fopen("teste.txt", "a")) == NULL)
    { printf("\n Erro na abertura do arquivo"); exit(1);}
  else
  {
    fputc(' ', fptr);
    fputc('S', fptr);
    fputc('i', fptr);
    fputc('l', fptr);
    fputc('v', fptr);
    fputc('a', fptr);
  }
  fclose(fptr);

  /* Abre  um arquivo com nome "teste" do tipo "r", 
   (Abre o arquivo somente para leitura, a partir do início. O arquivo deve existir.) */

  if ((fptr = fopen("teste.txt", "r")) != NULL)
  {

    /* a variavel "a" recebe char a char ate chegar no final do arquivo End of File(EOF),
     a cada vez que "a" recebe um char a funçao printf o imprime na tela. */

    while ((a = fgetc(fptr)) != EOF)
      printf("%c", a);

  }else{ printf("\n Erro na abertura do arquivo"); exit(1);}


  printf("\n");

  fclose(fptr);

  return 0;
}