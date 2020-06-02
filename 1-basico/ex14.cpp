#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h> 

using namespace std;

int somar(int a, int b);

int main(){
	
	int x, y = 0;
	
	cout << "Valor A: ";
	cin >> x;
	cout << "Valor B: ";
	cin >> y;

	cout << somar(x,y);
	
	return 0;
	
}

int somar(int a, int b){
	return a + b;
}

