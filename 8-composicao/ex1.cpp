#include <iostream>

//EXEMPLO DE COMPOSIÇÃO

using namespace std;

class Motor{
	public: 
		string descricao;
		int potencia;
};

class Carro{
	public: 
		int velMax;
		string tipo;
		string nome;
		int ano;
		int modelo;
		Motor motor;
		void setMotor(Motor motor);		
		void imprimir();
};

void Carro::setMotor(Motor vmotor){
	motor = vmotor;
}

void Carro::imprimir(){
	cout << "Carro: " << nome << endl;
	cout << "Motor: " << motor.descricao << endl;
	cout << "Potencia: " << motor.potencia << endl;
}

int main(){
	
	Carro *carro = new Carro();
	carro->ano = 2020;
	carro->modelo = 2020;
	carro->nome = "HB20";
	carro->tipo = "Popular";
	
 	Motor *motor1 = new Motor();
	motor1->descricao = "1.6";
	motor1->potencia = 128;
	
	carro->setMotor(*motor1);
	
	carro->imprimir();
	
	return 0;
}

