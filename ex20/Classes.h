#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{
	public:
		int tipo;
		int velAtual;
		Veiculo(int tp);
		int getVelMax();
		std::string getNome();
		bool getLigado();
		std::string setLigado(int i);	
	private:
		std::string nome;
		int velMax;
		bool ligado;	
};

//Implementação do método construtor da classe Veiculo
Veiculo::Veiculo(int tp){
	if (tp==1){
		nome="Carro";
		velMax=195;
	}else if(tp==2){
		nome="Aviao";
		velMax=900;
	}else if(tp==3){
		nome="Navio";
		velMax=100;
	}
}

int Veiculo::getVelMax(){
	return velMax;
}

std::string Veiculo::getNome(){
	return nome;
}

bool Veiculo::getLigado(){
	return ligado;
}

std::string Veiculo::setLigado(int i){
	if (i==1){
		//ligado=true;
		return "Ligado";
	}else{
		//ligado=false;
		return "Desligado";
	}
}
#endif
