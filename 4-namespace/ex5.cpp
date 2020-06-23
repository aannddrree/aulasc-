#include <iostream> 

using namespace std; 
  
namespace ns 
{ 
    // Declaração
    class Geek; 
} 
  
// Implementação 
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
