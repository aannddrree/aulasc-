#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

class Veiculo{
	public:
		int vel;
		int blind;
		int rodas;
		void setTipo(int tp);
		void setVelMax(int vm);
		void setArma(bool ar);
		void imprimir();
	private:
		int tipo;
		int velMax;
		bool arma;
};

void Veiculo::setTipo(int tp){
	tipo=tp;
}
void Veiculo::setVelMax(int vm){
	velMax=vm;
}
void Veiculo::setArma(bool ar){
	arma=ar;
}

void Veiculo::imprimir(){
	std::cout << "Velocidade inicial: " << vel << std::endl;
	std::cout << "E blindado: " << blind << std::endl;
	std::cout << "Qtd. de rodas: " << rodas << std::endl;
	std::cout << "Tipo de veiculo: " << tipo << std::endl;
	std::cout << "Velocidade maxima: " << velMax << std::endl;
	std::cout << "Arma: " << arma << std::endl;
	std::cout << "--------------------------" << std::endl;
}


//Herança:
class Moto:public Veiculo{
	public:
		Moto();
	private:
};

Moto::Moto(){
	vel = 0;
	blind = 0;
	rodas = 2;
	setTipo(1);
	setVelMax(200);
	setArma(false);
}

class Carro:public Veiculo{
	public:
		Carro();
};

Carro::Carro(){
	vel = 0;
	blind = 0;
	rodas = 4;
	setTipo(2);
	setVelMax(180);
	setArma(true);
}

#endif // VEICULO_H_INCLUDED
