#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"

class consultor : public Funcionario
{
    public:
        consultor();
        consultor(string nome, string matricula, float salario, float percentual);
        float getSalario();
        float getSalario(float percentual);
        virtual ~consultor();
};

#endif // CONSULTOR_H
