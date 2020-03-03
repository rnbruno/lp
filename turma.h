#include "aluno.h"

class Turma{

private:
	std::string codigo;
	std::string descricao;
	short capacidade;
	Aluno* alunos;

public:
	//get &  set
	std::string getCodigo();
	void setCodigo(std::string var_codigo);

	std::string getDescricao();
	void setDescricao(std::string var_descricao);

	short getCapacidade();
	void setCapacidade(short var_capacidade);

	std::string getAluno();
	void setAluno(std::string var_aluno)


}