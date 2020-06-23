#include <iostream> 
using namespace std; 
  
// Variável criada dentro do namespace
namespace first 
{ 
    int val = 500; 
} 
  
// Variável Global
int val = 100; 
  
int main() 
{ 
    // Local variable 
    int val = 200; 
  
    // As variáveis podem ser acessadas  
    // de fora do namespace utilizando o  
    // operacor :: 
    cout << first::val << '\n';  
  
    return 0; 
} 
