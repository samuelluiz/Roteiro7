#include "Funcionario.h"
#include <iostream>
#include <string>

using namespace std;

Funcionario::Funcionario(){}

Funcionario::Funcionario(string matr, string no, float sala)
{
    setMatricula(matr);
    setNome(no);
    setSalario(sala);

}

void Funcionario::setMatricula(string mat)
{
    matricula = mat;
}

void Funcionario::setNome(string n)
{
    nome = n;
}

void Funcionario::setSalario(float sal)
{
    if(sal > 0){
            salario = sal;
    } else {
        cout << "Salario invalido." << endl;
    }
}

string Funcionario::getMatricula()
{
    return matricula;
}

string Funcionario::getNome()
{
    return nome;
}

float Funcionario::getSalario()
{
    return salario;
}

Funcionario::~Funcionario()
{
    //dtor
}
