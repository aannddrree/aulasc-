#include <iostream> 
using namespace std; 
  
// Vari�vel criada dentro do namespace
namespace first 
{ 
    int val = 500; 
} 
  
// Vari�vel Global
int val = 100; 
  
int main() 
{ 
    // Local variable 
    int val = 200; 
  
    // As vari�veis podem ser acessadas  
    // de fora do namespace utilizando o  
    // operacor :: 
    cout << first::val << '\n';  
  
    return 0; 
} 
