#include <iostream>
#include <string>

using namespace std;

auto soma(double n1, double n2) -> double{
	return n1+n2;
}

string impressao(){
	return "Aula C++";
}

int main(){
	
	auto res=soma(10.3,5.8);
	cout << res << endl;

	return 0;
}
