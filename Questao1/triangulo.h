#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"
#include <string>

using namespace std;

class triangulo: public FiguraGeometrica
{
    public:
        float calcularArea(float base, float altura);
        triangulo(string nome, float base, float altura);
        virtual ~triangulo();
    private:
        float base;
        float altura;
};

#endif // TRIANGULO_H
