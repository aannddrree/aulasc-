#include <iostream>
using namespace std;

int main (){
	
	int idade;
	
	cout << "Qual e a sua idade: \n";
	cin >> idade;
	
	if (idade = 18 || idade > 18){
		cout << "Maior de idade";
	}else{
		cout << "Menor de idade";
	}
	
	
	int nota;
	string res;
	
	cout << "\nDigita a nota: \n";
	cin >> nota;
	
	(nota >= 5) ? res="Aprovado" : res="Reprovado";
	
	cout << "Resultado: " << res; 
	
	return 0;
}
