#include <iostream>
using namespace std;

int main(){
	
	int opcao;
	
	cout << "Digite a opcao: ";
	cin >> opcao;
	
	switch (opcao){	
		case 1:
			cout << "Voce digitou a opcao: " << opcao;
			break;
		case 2:
			cout << "Voce digitou a opcao:" << opcao;
			break;
		default:
			cout << "Opcao Invalida: " << opcao; 
	}
	return 0;
}
