#include "turma.h"

std::string Turma::getCodigo(){
	return codigo;
}
void Turma::setCodigo(std::string var_codigo){
codigo = var_codigo;
}

std::string Turma::getDescricao(){
	return descricao;
}
void Turma::setDescricao(std::string var_descricao){
descricao = var_descricao;
}

short getCapacidade(){
	return capacidade;
}
void setCapacidade(short var_capacidade){
	capacidade = var_capacidade;
	participantes = new Aluno[capacidade];
	lotacao = 0;
}
void addParticipantes(Aluno umAluno){
	participantes[lotacao++]= umAluno;
	
}
