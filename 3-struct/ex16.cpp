#include <iostream>

using namespace std;

struct Carro{
	string nome;
	string cor;
	int potencia;
	int velocidadeMax;
	
	void inserir (string nome, string cor, int potencia, int velocidadeMax){
		nome = nome;
		cor = cor;
		potencia = potencia;
		velocidadeMax = velocidadeMax;
	}
	
	void imprimir(){
		cout << "Nome: " << nome << "\n";
		cout << "Cor: " << cor << "\n";
		cout << "Potencia: " << potencia << "\n";
		cout << "Velocidade maxima: " << velocidadeMax << "\n";
	}
	
	void addVelocidade(int velocidade){
		velocidadeMax = velocidadeMax + velocidade;
	}
};

void imprimirCarro(Carro carro);

int main(){

	Carro car1;
	
	car1.nome = "Gol";
	car1.cor = "Branco";
	car1.potencia = 100;
	car1.velocidadeMax = 200;
	cout << "\n";
	car1.imprimir();
	cout << "\n";
	car1.addVelocidade(10);
	cout << "\n";
	car1.imprimir();
	
	return 0;
}


