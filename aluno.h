#include <iostream>

class Aluno{
	private:
	std::string nome;
	int idade;
	int periodo;

	public:
	int getIdade();
	void setIdade(int var_idade);

	std::string getNome();
	void setNome(std::string var_nome);

	int getPeriodo();
	void setPeriodo(int var_periodo);

};