#include <iostream>

using namespace std;

struct Pessoa{
	
	int id;
	string nome;
	string telefone;
	string endereco;
	string cidade;
	
	void inserir(string vnome, string vtelefone, string vendereco, string vcidade){
		static int vid = 2;
		id = vid++;
		nome = vnome;
		telefone = vtelefone;
		endereco = vendereco;
		cidade = vcidade;
	}
	
	void imprimir(){
		cout << "Id: " << id << endl;
		cout << "Nome: " << nome << endl;
		cout << "Telefone: " << telefone << endl;
		cout << "Endereço: " << endereco << endl;
		cout << "Cidade: " << cidade << endl;	
		cout << "-------------------------------" << endl;
	}	
};

void inserir(string vnome, string vtelefone, string vendereco, string vcidade);
void imprimir();

int main(){
	
	Pessoa *pessoas = new Pessoa[5];
	Pessoa pes1;
	
	register int id=1;
	auto nome="andre";
	auto telefone="(16) 1111-8888";
	auto endereco="rua 1";
	auto cidade="Araraquara";
	
	//Incremento por atributo
	pes1.id = id;
	pes1.nome = nome;
	pes1.telefone = telefone;
	pes1.cidade = cidade;
	pes1.endereco = endereco;
	pessoas[0] = pes1;
	
	//Incremeto diretamente pelo método de inclusão:
	pessoas[1].inserir("José", "16 8888-7777", "Rua 2", "Araraquara");
	pessoas[2].inserir("Luiz", "16 8888-7772", "Rua 3", "Araraquara");
	pessoas[3].inserir("Daniel", "16 8888-7773", "Rua 4", "Araraquara");
	pessoas[4].inserir("Bruna", "16 8888-7774", "Rua 5", "Araraquara");
	
	//Imprimir dados
	for (int i = 0; i < 5; i++){
		pessoas[i].imprimir();
	}
	
	return 0;
}
