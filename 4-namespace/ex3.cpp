#include <iostream> 
using namespace std; 

namespace ns1 
{ 
    int value()    { return 5; } 
} 
namespace ns2  
{ 
    const double x = 100; 
    double value() {  return 2*x; } 
} 
  
int main() 
{ 
    // Acessando a fun��o do ns1
    cout << ns1::value() << '\n';  
  
    // Acessando a fun��o do ns2
    cout << ns2::value() << '\n';  
  
    // Acessando a vari�vel do ns2
    cout << ns2::x << '\n';        
  
    return 0; 
} 
