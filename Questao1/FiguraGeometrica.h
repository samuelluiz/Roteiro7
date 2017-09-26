#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;

class FiguraGeometrica
{
    public:
        float calcularArea();
        FiguraGeometrica(string nome);
        virtual ~FiguraGeometrica();

    protected:
        string nome;
};

#endif // FIGURAGEOMETRICA_H
