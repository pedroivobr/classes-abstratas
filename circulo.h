#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"

class Circulo : public FiguraGeometrica
{
private:
    int x,y,raio,tipo;
public:
    Circulo(int x,int y,int raio,int tipo);
    void draw(Screen &t);
};

#endif // CIRCULO_H
