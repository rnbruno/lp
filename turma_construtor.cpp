
#include <iostream>
#include <string>

using namespace std;
//.c
class Aluno
{
private:
	string matricula;
	short idade;
	string contato1;
	string endereco;
	string nome;
public:
	Aluno();
	Aluno(string var_matricula, short var_idade, string var_contato1, string var_endereco, string var_nome);
	
}; //segunda classe
class Turma
{
private:
	string codigo;
	string descricao;
	short capacidade;
	Aluno* participantes;  //atenção no ponteiro
	int lotacao;
public:
	// get & set
	Turma(string var_codigo, string var_descricao, short var_capacidade, )
	// void setParticipantes();

	void addParticipantes(Aluno umAluno);
	void mostrarAlunos();
	void mostrarTurma();
};
//.cpp
Aluno::Aluno(){
    matricula = " ";
    idade = 0;
    contato1 = " ";
    endereco = " ";
    nome = " ";
}
Aluno::Aluno(string var_matricula, short var_idade, string var_contato1, string var_endereco, string var_nome ){
    matricula = var_matricula;
    idade = var_idade;
    contato1 = var_contato1;
    endereco = var_endereco;
    nome = var_nome;
    }

//construtores
Turma::Turma(string codigo, string descricao, short capacidade, Aluno,int var_lotacao){
    codigo = var_codigo;
    descricao = var_descricao;
    capacidade = var_capacidade;
    Aluno = *participantes;
    lotacao = var_lotacao;
}
    
void Turma::setCapacidade(short cp){
	capacidade = cp;
	participantes = new Aluno[capacidade];
	lotacao = 0;
}

short Turma::getCapacidade(){
	return capacidade;
}

void Turma::addParticipantes(Aluno umAluno){
	if (lotacao < capacidade)
	{
		participantes[lotacao++] = umAluno;
	}
	
}
void Turma::mostrarAlunos()
{
    for (short i = 0; i < lotacao; i++)
    {
        // students[i].details();
        cout << "Nome: " << participantes[i].getNome() << endl;
        cout << "Matricula: " << participantes[i].getMatricula() << endl;
        cout << "Idade: " << participantes[i].getIdade() << endl;
        cout << "Contato1: " << participantes[i].getContato1() << endl;
        cout << "Endereco: " << participantes[i].getEndereco() << endl;
        
        
        cout << endl;
    }
}

void Turma::mostrarTurma()
{       
};
int main()
{
    Aluno aluno1;
    aluno1.setNome("Emerson");
    aluno1.setMatricula("20180101");
    aluno1.setIdade(20);
    aluno1.setContato1("emerson@mail.com");
    aluno1.setEndereco("Rua fulano de tal, 1000");

    

    Aluno aluno2;
    aluno2.setNome("Silvio");
    aluno2.setMatricula("20180101");
    aluno2.setIdade(65);
    aluno2.setContato1("silvio@mail.com");
    aluno2.setEndereco("Rua fulano de tal, 1000");

    Aluno aluno3;
    aluno3.setNome("Davi Tubarão");
    aluno3.setMatricula("20180101");
    aluno3.setIdade(20);
    aluno3.setContato1("Davi@mail.com");
    aluno3.setEndereco("Rua teste, 1000");

    Turma turma;
    turma.setCodigo("LP1");
    turma.setDescricao("Linguagem de Programação");
    turma.setCapacidade(2);

    turma.addParticipantes(aluno1);
    turma.addParticipantes(aluno2);
    turma.addParticipantes(aluno3);

    turma.mostrarAlunos();
    turma.mostrarTurma();
    
    cout << "Codigo: " << turma.getCodigo() << endl;
    cout << "Descricao: " << turma.getDescricao() << endl;
    cout << "Capacidade: " << turma.getCapacidade() << endl;
    
   
    return 0;
}
