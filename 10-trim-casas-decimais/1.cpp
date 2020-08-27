#include <iostream>
#include <stdio.h>
#include <conio.h>

//https://www.oreilly.com/library/view/c-cookbook/0596007612/ch04s03.html
//http://www.martinbroadhurst.com/how-to-trim-a-stdstring.html

using namespace std;

std::string& ltrim(std::string& str, const std::string& chars = "\t\n\v\f\r ")
{
    str.erase(0, str.find_first_not_of(chars));
    return str;
}
 
std::string& rtrim(std::string& str, const std::string& chars = "\t\n\v\f\r ")
{
    str.erase(str.find_last_not_of(chars) + 1);
    return str;
}
 
std::string& trim(std::string& str, const std::string& chars = "\t\n\v\f\r ")
{
    return ltrim(rtrim(str, chars), chars);
}

int main(){

  FILE *arq;
  char Linha[100];
  char *result;
  int i;
  
  // Abre um arquivo TEXTO para LEITURA
  arq = fopen("teste.txt", "rt");
  
  if (arq == NULL)  // Se houve erro na abertura
  {
     printf("Problemas na abertura do arquivo\n");
     return 1;
  }
  
  i = 1;
  while (!feof(arq))
  {
	// Lê uma linha (inclusive com o '\n')
      result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
      if (result) { // Se foi possível ler
          string valor = Linha;
		  //printf("Linha %d : %s",i,Linha);
		  string nome = valor.substr(4,15);
		  //Verificar O Replace
		  nome = trim(nome);
		  
		  int qtd = nome.length();
		  
		  cout << "qtd caracteres: " << qtd << endl;
		  cout << "Linha: " << i << ": "<< nome << endl;
	  }
      i++;
  }
  fclose(arq);
	
  return 0;
}
