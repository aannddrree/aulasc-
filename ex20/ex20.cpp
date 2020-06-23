#include <iostream>
#include "Classes.h"

using namespace std;

string verificaLigado(bool status);

int main(){
	
	Veiculo *v1=new Veiculo(1);
	Veiculo *v2=new Veiculo(2);
	Veiculo *v3=new Veiculo(3);
	
	/*v1->setLigado(1);
	v2->setLigado(0);
	v3->setLigado(1);*/
	
	cout << "Veiculo " << v1->getNome() << ", Velocidade (max): " << v1->getVelMax() << ", Status: " << v1->setLigado(1) << endl;
	cout << "Veiculo " << v2->getNome() << ", Velocidade (max): " << v2->getVelMax() << ", Status: " << v2->setLigado(0) << endl;
	cout << "Veiculo " << v3->getNome() << ", Velocidade (max): " << v3->getVelMax() << ", Status: " << v3->setLigado(1) << endl;

	return 0;
}

/*string verificaLigado(bool status){
	if (status)
		return "Ligado";
	return "Desligado";
}*/
