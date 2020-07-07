#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	//quero que a minha variavel seja armazenada do registrador, 
	//eu estou pedindo mas não fica a cargo do programa e sim pelo sistema operacional. 
	//o registrador está no processador - acesso rapido
	register int cont;
	
	for (cont=0; cont<=10; cont++){
		cout << cont << endl;
	}
	
	vector<int>v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	
	//A unica coisa q muda é o auto:
	for(register auto it=v.begin();it!=v.end();it++){
		cout << *it << endl;
	}
	
	return 0;
}
