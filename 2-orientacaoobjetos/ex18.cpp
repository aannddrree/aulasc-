#include <iostream>

using namespace std;

class Aviao{
	public:
		int velocidade=0;
		int velocidadeMax;
		string tipo;
		void ini(int tp);
		void imprimir();
	private:
};

void Aviao::ini(int tp){
	// 1 - jato
	// 2 - MonoMotor
	// 3 - Planador
	
	if (tp==1){
		this->velocidadeMax=1000;
		this->tipo="Jato";
	}else if (tp==2){
		this->velocidadeMax=600;
		this->tipo="MonoMotor";
	}else if (tp==3){
		//Teste sem o this
		velocidadeMax=200;
		tipo="Planador";
	}else{
		cout << "Opcao invalida";
	}
}

void Aviao::imprimir(){
	cout << "Tipo: " << this->tipo << endl;
	cout << "Velocidade Maxima: " << this->velocidadeMax << endl;
	cout << "-------------------------------" << endl;
}

int main(){
	
	//Criar um objeto - Objetos no C++ são declarados como ponteiro
	Aviao *aviao1 = new Aviao();
	
	//aviao1->velocidade = 10;
	//aviao1->velocidadeMax = 500;	
	//cout << "Velocidade: " << aviao1->velocidade << endl;
	//cout << "Velocidade Maxima: " << aviao1->velocidadeMax << endl;
	
	for (int i = 1; i < 4; i++){
		aviao1->ini(i);
		aviao1->imprimir();
	}
	
	return 0;
}