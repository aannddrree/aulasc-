#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){

  FILE *arq;
  char Linha[100];
  char *result;
  int i;
  
  // Abre um arquivo TEXTO para LEITURA
  arq = fopen("fileExample.txt", "rt");
  
  if (arq == NULL)  // Se houve erro na abertura
  {
     printf("Problemas na abertura do arquivo\n");
     return 1;
  }
  
  i = 1;
  while (!feof(arq))
  {
	// L� uma linha (inclusive com o '\n')
      result = fgets(Linha, 100, arq);  // o 'fgets' l� at� 99 caracteres ou at� o '\n'
      if (result)  // Se foi poss�vel ler
	  printf("Linha %d : %s",i,Linha);
      i++;
  }
  fclose(arq);
	
  return 0;
}



