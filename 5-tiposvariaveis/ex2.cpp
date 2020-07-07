#include <iostream>
#include <string>

using namespace std;

int soma(int n1, int n2){
	return n1+n2;
}

string impressao(){
	return "Aula C++";
}

int main(){
	
	auto num=10;
	auto nome="andre";
	auto valor=10.8;
	
	//auto res=soma(10,5);
	//cout << res << endl;
	
	auto res=impressao();
	cout << res << endl;
	
	return 0;
}
