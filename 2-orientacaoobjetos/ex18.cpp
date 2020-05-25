#include <iostream>

using namespace std;

//Declaração da classe
class Aviao{

	public:
		int velocidade=0;
		int velocidadeMax;
		string tipo;
		void ini(int tp);
	private:	
	
};

void Aviao::ini(int tp){ // 1 = jato, 2 - monomotor, 3 planador
	if (tp==1){
		this->velocidadeMax=700;
		this->tipo="Jato"; 
	}else if (tp==2){
		this->velocidadeMax=500;
		this->tipo="Monomotor";
	}else if(tp==3){
		this->velocidadeMax=300;
		this->tipo="planador";
	}
}

int main(){
	//Objetos são declarados como ponteiros
	Aviao *aviao = new Aviao();
	
	Aviao *aviao2 = new Aviao();
	
	aviao->velocidade = 10;
	aviao->velocidadeMax = 1000;
	
	cout << aviao->velocidade << "\n";
	cout << aviao->velocidadeMax << "\n";
	
	aviao->ini(3);
	
	cout << aviao->velocidadeMax << endl;
	
	
	aviao2->ini(2);
	cout << aviao2->velocidadeMax;
	
	
	return 0;
}
