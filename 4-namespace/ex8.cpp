#include <iostream>

using namespace std;

namespace ns {
	class Pessoa{
		public:
			void imprimir(){
				cout << "Teste impressao ok" << endl;
			}
			void mostrar();
	};
	
	namespace t1 {
		double value = 500;	
	}
	
	void Pessoa::mostrar(){
		cout << "Teste Mostrar()" << endl;
	}
}

/*void ns::Pessoa::mostrar(){
	cout << "Teste Mostrar()" << endl;
}*/

int main () {
	ns::Pessoa pessoa;
	pessoa.imprimir();	
	cout << "Teste Namespace Interno: " << ns::t1::value << endl;
	
	pessoa.mostrar();
	
	return 0;
}
