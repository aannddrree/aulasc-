#include <iostream> 

using namespace std; 
  
// Criando namespace
namespace ns 
{ 
    void display(); 
    class Geek 
    { 
    public: 
       void display(); 
    }; 
} 
  
// Implementação dos métodos
void ns::Geek::display() 
{ 
    cout << "Teste Display - Classe Geek" << endl; 
} 
void ns::display() 
{ 
    cout << "Teste Display - Metodo" << endl; 
} 
  
// Driver code 
int main() 
{ 
    ns::display(); 
    
    ns::Geek obj; 
    obj.display(); 
    
    return 0; 
} 
