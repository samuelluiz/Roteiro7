#include "triangulo.h"
#include "FiguraGeometrica.h"
#include <string>
#include <iostream>

using namespace std;

triangulo::triangulo(string n, float b, float h)
{
    nome =n;

    if(b >0){
        base =b;
    } else {
        cout<< "Valor da base invalido" << endl;
    }

    if(h > 0){
        altura = h;
    } else {
        cout << "Valor da altura invalido" << endl;
    }
}

float triangulo::calcularArea(float b, float h){
return((b*h)/2);
}

triangulo::~triangulo()
{
    //dtor
}
