#include <iostream>
using namespace std;

int main(){
	
	int opcao;
	string nome;
	
	menu:
		cout << "\nMENU";
		cout << "\n1 - Cadastrar";
		cout << "\n2 - Consultar";
		cout << "\n3 - Sair\n";
		cin >> opcao;
		
	if (opcao == 1){
		cout << "Qual e o seu nome:";
		cin >> nome;
		goto menu;
	}else if (opcao == 2){
		cout << "Seu nome e: " << nome;
		goto menu;
	}else if (opcao == 3){
		cout << "Bye... ";
	}else{
		cout << "Opcao invalida";
		goto menu;
	}
	
	return 0;
}
