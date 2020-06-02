#include <iostream>
#include "Classes.h"

using namespace std;

string verificaLigado(bool status);

int main(){
	
	Veiculo *v1=new Veiculo(1);
	Veiculo *v2=new Veiculo(2);
	Veiculo *v3=new Veiculo(3);
	
	v1->setLigado(1);
	v2->setLigado(0);
	v3->setLigado(1);
	
	
	cout << "Velocidade maxima do " << v1->getNome() << ": " << v1->getVelMax() << " ele esta: " << verificaLigado(v1->getLigado()) << endl;
	cout << "Velocidade maxima do " << v2->getNome() << ": " << v2->getVelMax() << " ele esta: " << verificaLigado(v2->getLigado()) << endl;
	cout << "Velocidade maxima do " << v3->getNome() << ": " << v3->getVelMax() << " ele esta: " << verificaLigado(v3->getLigado()) << endl;
	
	return 0;
}

string verificaLigado(bool status){
	if (status)
		return "ligado";
	return "deligado";
}
