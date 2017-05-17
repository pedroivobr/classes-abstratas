#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica
{
private:
    int x,y,largura,altura;
public:
    Retangulo(int x,int y,int largura, int altura);
    void draw(Screen &t);
    int getX();
    int getY();
    int getLargura();
    int getAltura();
};

#endif // RETANGULO_H
