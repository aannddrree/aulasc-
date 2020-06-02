#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{
	public: 
		int velMax;
		int tipo;
		Veiculo(int tp);
		int getVelMax();
		std::string getNome();
		bool getLigado();
		void setLigado(int i);
	private:	
		std::string nome;
		int vel;
		bool ligado;		
};

Veiculo::Veiculo(int tp){
	tipo=tp;
	if (tipo==1){
		nome="Carro";
		velMax=180;
	}else if (tipo==2){
		nome="Aviao";
		velMax=900;
	}else if(tipo==3){
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

void Veiculo::setLigado(int i){
	if (i==1){
		ligado=true;
	}else{
		ligado=false;
	}
}
	
#endif // CLASSES_H_INCLUDED
