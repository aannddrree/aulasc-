#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <vector>
#include <sstream>

using namespace std;

class Drinks{
	public: 
		string country;
		string beer_servings;
		string spirit_servings;
		string wine_servings;
		string total_litres_of_pure_alcohol;
		void imprimir();
		void inserir(string vcountry, string vbeer_servings,  string vspirit_servings, string vwine_servings, string vtotal_litres_of_pure_alcohol);
};

void Drinks::imprimir(){
		cout << "{ " << country << " , " << beer_servings << " , " << wine_servings << " , " << total_litres_of_pure_alcohol << " } " << endl;
}

void Drinks::inserir(string vcountry, string vbeer_servings,  string vspirit_servings, string vwine_servings, string vtotal_litres_of_pure_alcohol){
	country = vcountry;
	beer_servings = vbeer_servings;
	spirit_servings = vspirit_servings;
	wine_servings = vwine_servings;
	total_litres_of_pure_alcohol = vtotal_litres_of_pure_alcohol;
}

vector<string> split (const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}

int main(){

  Drinks *drinks = new Drinks[500];
  FILE *arq;
  char Linha[100];
  char *result;
  int i;
  
  // Abre um arquivo TEXTO para LEITURA
  arq = fopen("DadosDrinks.csv", "rt");
  
  if (arq == NULL)  // Se houve erro na abertura
  {
     printf("Problemas na abertura do arquivo\n");
     return 1;
  }
  
  i = 0;
  while (!feof(arq))
  {
	// Lê uma linha (inclusive com o '\n')
      result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
      if (result) { // Se foi possível ler
	  string valor = Linha;
	  vector<string> v = split (valor, ';');
	  drinks[i].inserir(v[0], v[1], v[2], v[3], v[4]);
	  }
    i++;
  }
  fclose(arq);
 	
  for (int z = 0; z <= i; z++){
    drinks[z].imprimir();
  }
  return 0;
}



