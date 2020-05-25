#include <iostream>
using namespace std;

int n1,n2; // Veriáveis Globais

int main(){
	
	int n3, n4; // Veriáveis Locais
	int res, res1, res2;
	
	n1=10;
	n2=5;
	n3=2;
	n4=1;
	
	res= (n1+n2+n3+n4) - 2;
	
	res1=n1/n2;
	res2=n1%n2;
	
	cout << "Soma total: " << res < "\n";
	
	cout << "\nDivisao: " << res1 << "\n";
	cout << "resto: " << res2 << "\n";
	
	return 0;
}
