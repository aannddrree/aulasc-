#include <iostream>

using namespace std;

int main(){

	//float com 2 casas ap�s a v�rgula:
	printf("%.*f\n", 2, 3.14159265359);
	
	//inteiro com 4 casas e com zeros a esquerda:
	printf("%0*d\n", 4, 12);
	
	//Quando mais de um especificador � usado na string do printf:
	printf("%0*d %.*f\n", 4, 12, 2, 3.14159265359);

    return 0;
}
