#include "aluno.h"
#include <iostream>

int Aluno::getIdade(){
	return idade;
}
void Aluno::setIdade(int var_idade) {
idade = var_idade;
}

std::string Aluno::getNome(){
	return nome;
}
void Aluno::setNome(std::string var_nome) {
nome = var_nome;
}

int Aluno::getPeriodo(){
	return periodo;
}
void Aluno::setPeriodo(int var_periodo) {
periodo = var_periodo;
}