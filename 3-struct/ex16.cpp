#include <iostream>

using namespace std;

struct Motor{
	int id;
	string descricao;
};

struct Carro{
	//Atributos
	string nome;
	string cor;
	int potencia;
	int velocidadeMax;
	Motor motor;
	
	void imprimir(){
		cout << "Nome: " << nome << endl;
		cout << "Cor: " << cor << endl;
		cout << "Potencia: " << potencia << endl;
		cout << "Velocidade maxima: " << velocidadeMax << endl;
		
		cout << "Id Motor: " << motor.id << endl;
		cout << "Descricao Motor: " << motor.descricao << endl;
		
		cout << "-------------------------------" << endl;
	}
	
	void addVelocidade(int vel){
		velocidadeMax = velocidadeMax + vel;
	}	
};

//Declaração dos métodos 
void imprimir();
void addVelocidade(int vel);

int main(){
	
	//Implementando o nosso código:
	Carro car1;
	
	car1.nome = "Palio";
	car1.cor = "Branco";
	car1.potencia = 5;
	car1.velocidadeMax = 200;
	
	car1.motor.id = 1;
	car1.motor.descricao = "motor forte";
	
	//Impressao1
	car1.imprimir();
	
	//Aumentar a velocidade
	car1.addVelocidade(20);
	
	//Impressao2
	car1.imprimir();
	
	return 0;
}