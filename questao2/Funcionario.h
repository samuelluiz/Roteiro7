#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;

class Funcionario
{
    public:
        Funcionario(string matricula, string nome, float salario);
        Funcionario();
        string getMatricula();
        string getNome();
        float getSalario();

        void setMatricula(string mat);
        void setNome(string n);
        void setSalario(float sal);

        virtual ~Funcionario();
    private:
        string matricula;
        string nome;
        float salario;
};

#endif // FUNCIONARIO_H
