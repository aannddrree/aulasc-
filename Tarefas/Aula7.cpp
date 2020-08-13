#include <iostream>

using namespace std;

class Cliente{
	public: 
		int id;
		string nome;
		string telefone;
		string cpf;
};

class Produto{
	public: 
		int id;
		string nome;
};

class Vendas{
	public: 
		int id;
		string descricao;
		string data;
		Produto produto;
		Cliente cliente;
		void setProduto(Produto produto);
		void setCliente(Cliente cliente);		
		void imprimir();
};

void Vendas::setCliente(Cliente vcliente){
	cliente = vcliente;
}

void Vendas::setProduto(Produto vproduto){
	produto = vproduto;
}

void Vendas::imprimir(){
	cout << "Id Venda: " << id << endl;
	cout << "Descricao: " << descricao << endl;
	cout << "Nome Produto: " << produto.nome << endl;
	cout << "Nome Cliente: " << cliente.nome << endl;
}

int main(){
	
	
	Cliente *cli = new Cliente();
	cli->nome = "Jose";
	
	Produto *produto = new Produto();
	produto->nome = "Martelo";
	
	Vendas *venda = new Vendas();
	venda->id = 1;
	venda->descricao = "Minha venda";
	
	venda->setProduto(*produto);
	venda->setCliente(*cli);
	
	
	venda->imprimir();

	return 0;
}
