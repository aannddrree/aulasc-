#include <iostream>

using namespace std;

int main(){
	
	
	int idade;
	
	cout << "Qual e a sua idade: " << "\n";
	cin >> idade;
	
	if (idade >= 18) 
		cout << "Voce e maior de idade" << "\n";
	else{
		cout << "Voce e menor de idade" << "\n";
		cout << "teste 2 linhas";
	}
	
	return 0;
	
}
