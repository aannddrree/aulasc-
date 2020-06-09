#include <iostream>

using namespace std;

struct Carro{
	string nome;
	string cor;
	int potencia;
	int velocidadeMax;
	
	void inserir(string vnome, string vcor, int vpotencia, int vvelocidadeMax){
		nome = vnome;
		cor = vcor;
		potencia = vpotencia;
		velocidadeMax = vvelocidadeMax;
	}
	
	void imprimir(){
		cout << "Nome: " << nome << endl;
		cout << "Cor: " << cor << endl;
		cout << "Potencia: " << potencia << endl;
		cout << "Velocidade maxima: " << velocidadeMax << endl;	
		cout << "-------------------------------" << endl;
	}
	
};
//Declaração funções:
void inserir(string vnome, string vcor, int vpotencia, int vvelocidadeMax);
void imprimir();

int main(){
	
	//Arrays
	Carro *carros = new Carro[5];
	
	//Criando os carros
	Carro car1, car2, car3, car4, car5;
	
	//Exemplo add por struct
	car2.nome = "Teste";
	car2.potencia = 100;
	car2.velocidadeMax = 400;
	car2.cor = "Bege";
	
	carros[0] = car1;
	carros[1] = car2;
	carros[2] = car3;
	carros[3] = car4;
	carros[4] = car5;
	
	//add via função
	carros[0].inserir("HB20", "Branco", 4, 190);
	carros[1].inserir("Palio", "Azul", 4, 160);
	carros[2].inserir("Gol", "Verde", 4, 180);
	carros[3].inserir("Creta", "Vermelho", 4, 195);
	carros[4].inserir("HRV", "Amarelo", 4, 200);
	
	//Impressão
	for (int i = 0; i < 5; i++){
		carros[i].imprimir();
	}

	return 0;
}