#include <iostream>
#include <vector>

using namespace std;

void somador(){
	static auto i=0; //Teste com e sem o static, uma vez declarada usa a mesma posi��o. 
	i++;
	cout << i << endl;
}

int main(){
	
	somador();
	somador();
	somador();
	somador();
	somador();
	somador();
	
	return 0;
}
