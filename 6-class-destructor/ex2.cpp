#include <iostream>

using namespace std;

class Line {
	public:
		void setLength (double len);
		double getLength();
		Line();  //Constructor - � quando a classe � instanciada
		~Line(); //Destructor - � quando o objeto � finalizado ("morre") 
	private:
		double length;
};

void Line::setLength(double len){
	length = len;
}

double Line::getLength(){
	return length;
}

Line::Line(){
	cout << "Inicio - constructor" << endl;
}

Line::~Line(){
	cout << "Fim - destructor" << endl;
}

int main (){
	
	cout << "inicio execu��o" << endl;
	Line *line = new Line();
	cout << "setar dado" << endl;
	line->setLength(5);
	cout << "imprimir dado" << endl;
	cout << line->getLength() << endl;
	cout << "for�ar destructor" << endl;
	delete line;
	cout << "fim" << endl;
	return 0;
}
