#include <iostream>

using namespace std;

struct Carro{
	string nome;
	string cor;
	int potencia;
	int velocidadeMax;
	
	void inserir (string vnome, string vcor, int vpotencia, int vvelocidadeMax){
		nome = vnome;
		cor = vcor;
		potencia = vpotencia;
		velocidadeMax = vvelocidadeMax;
	}
	
	void imprimir(){
		cout << "Nome: " << nome << "\n";
		cout << "Cor: " << cor << "\n";
		cout << "Potencia: " << potencia << "\n";
		cout << "Velocidade maxima: " << velocidadeMax << "\n";
	}
	
	void addVelocidade(int vvelocidade){
		velocidadeMax = velocidadeMax + vvelocidade;
	}
};

void imprimirCarro(Carro carro);

int main(){

	//Ponteiro - Array de Carros
	Carro *carros = new Carro[5];
	
	Carro car1, car2, car3, car4, car5;
	
	carros[0] = car1;
	carros[1] = car2;
	carros[2] = car3;
	carros[3] = car4;
	carros[4] = car5;
	
	carros[0].inserir("Gol", "Branco", 10, 180);
	carros[1].inserir("Palio", "Preto", 10, 160);
	carros[2].inserir("Uno", "vermelho", 10, 180);
	carros[3].inserir("HB20", "Branco", 10, 190);
	carros[4].inserir("Prisma", "Azul", 10, 200);
	

	for (int i = 0; i<5;i++){
		carros[i].imprimir();
	}
	
	return 0;
}


