#include <iostream>
#include "veiculo.h"

using namespace std;

int main (){
	
	Moto *m1 = new Moto();	
	Carro *c1 = new Carro();
	
	m1->imprimir();
	c1->imprimir();
	
	return 0;
}
