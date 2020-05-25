#include <iostream>

using namespace std;

struct Carro{
	string nome;
	string cor;
	int potencia;
	int velocidadeMax;
};

void imprimirCarro(Carro carro);

int main(){
	
	//Criar uma estrutura - composta por atributos e métodos
	
	Carro car1;
	Carro car2;
	
	car1.nome = "Gol";
	car1.cor = "Branco";
	car1.potencia = 100;
	car1.velocidadeMax = 200;
	
	car2.nome = "Palio";
	car2.cor = "Vermelho";
	car2.potencia = 80;
	car2.velocidadeMax = 180;
	
	imprimirCarro(car1);
	imprimirCarro(car2);
	
	return 0;
}

void imprimirCarro(Carro carro){
	cout << "Nome: " << carro.nome << "\n";
	cout << "Cor: " << carro.cor << "\n";
	cout << "Potencia: " << carro.potencia << "\n";
	cout << "Velocidade maxima: " << carro.velocidadeMax << "\n";
}
