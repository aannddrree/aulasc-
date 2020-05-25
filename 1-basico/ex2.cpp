#include <iostream>

using namespace std;

int main (){
	
	int qtdVidas = 1;
	char letra = 'A';
	float decimal = 2.1;
	double decimal2 = 2.1;
	bool isVivo = true;
	string nome = "andre";
	
	
	cout << "Qual e o seu nome: ";
	cin >> nome;	
	cout << "Digite a quantidade de vidas que voce tem: ";
	cin >> qtdVidas;
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Valor deposito:";
	cin >> decimal;
	
	cout << "\n" << nome << "\n" << qtdVidas << "\n" << letra << "\n" << decimal << "\n";
	
	system("pause");
	return 0;
}
