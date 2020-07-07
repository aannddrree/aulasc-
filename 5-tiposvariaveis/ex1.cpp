#include <iostream>
#include <string>

using namespace std;

//Para funcinar esse exercicio é necessário fazer uma alteração no processo de compilação:
//Tools -> compiler options -> Programas: gcc.exe -std=c++11 and g++.exe -std=c++11

int main(){
	
	//Variavel não tipada, mas o dados precisa ser inicializado
	
	auto num=123;
	cout << num << endl;
	
	return 0;
}
