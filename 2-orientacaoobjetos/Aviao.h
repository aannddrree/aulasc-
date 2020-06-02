#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{
	public: 
		int vel=0;
		int velocidadeMax;
		std::string tipo;
		Aviao(int tp); //Construtor da Classe
		void imprimir();
	private:			
};

Aviao::Aviao(int tp){
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

void Aviao::imprimir(){
	std::cout << "Tipo: " << tipo << std::endl;
	std::cout << "Velocidade maxima: " << velocidadeMax << std::endl;
	std::cout << "Velocidade atual: " << vel << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
}

#endif // AVIAO_H_INCLUDED
