#include <iostream> 

using namespace std; 
  
namespace ns 
{ 
    // Declara��o
    class Geek; 
} 
  
// Implementa��o 
class ns::Geek 
{ 
public: 
    void display() 
    { 
        cout << "Teste Display - Classe Geek" << endl; 
    } 
}; 
  
int main() 
{ 
    // Criando um objeto da classe Geek
    ns::Geek obj; 
    obj.display(); 
    return 0; 
} 
