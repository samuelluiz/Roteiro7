#include "consultor.h"
#include <iostream>
#include "Funcionario.h"

using namespace std;

consultor::consultor(){}

consultor::consultor(string n, string m, float s, float p){
    setNome(n);
    setMatricula(m);
    setSalario(s);
}

float consultor::getSalario()
{
    return Funcionario::getSalario() * 1.1;
}

float consultor::getSalario(float percentual)
{
    return Funcionario::getSalario() * (1+(percentual/100));
}

consultor::~consultor()
{
    //dtor
}
