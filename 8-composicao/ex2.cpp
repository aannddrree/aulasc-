#include <iostream>

using namespace std;

class Fabricante{
	public: 
		string nome;
		string endereco;
};

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
		Fabricante fabricante;
		void setMotor(Motor motor);	
		void setFabricante(Fabricante fabricante);	
		void setDados(Motor motor, Fabricante fabricante);
		void imprimir();
};

void Carro::setMotor(Motor vmotor){
	motor = vmotor;
}

void Carro::setFabricante(Fabricante vfabricante){
	fabricante = vfabricante;
}

void Carro::setDados(Motor vmotor, Fabricante vfabricante){
	motor = vmotor;
	fabricante = vfabricante;
}

void Carro::imprimir(){
	cout << "Nome do carro: " << nome << endl;
	cout << "Velocidade Maxima: " << velMax << endl;
	cout << "Tipo: " << tipo << endl;
	cout << "Ano: " << ano << endl;
	cout << "Modelo: " << modelo << endl;
	
	cout << "Motor: " << motor.descricao << endl;
	cout << "Potencia: " << motor.potencia << endl;
	
	cout << "Nome Fabricante: " << fabricante.nome << endl;
	cout << "Endereco Fabricante: " << fabricante.endereco << endl;
}

int main (){
	
	Carro *carro = new Carro();
	
	carro->ano = 2020;
	carro->modelo = 2020;
	carro->nome = "HB20";
	carro->tipo = "Popular";
	
	Motor *m1 = new Motor();
	m1->descricao = "1.6";
	m1->potencia = 128;
	
	Fabricante *f1 = new Fabricante();
	f1->endereco = "rua 1";
	f1->nome = "jose";
	
	//carro->setMotor(*m1);
	//carro->setFabricante(*f1);

	carro->setDados(*m1, *f1);
	
	carro->imprimir()

	return 0;	
}
