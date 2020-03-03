#include <iostream>
#include "aluno.h"
int main() {
Aluno a;
a.setIdade(18);
a.setNome("Thalia");
a.setPeriodo(7);
std::cout << "Idade = " << a.getIdade() << ", Nome = " << a.getNome() 
<< ", Periodo = " << a.getPeriodo()<< std::endl;
return 0;
};
