#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"

class Reta : public FiguraGeometrica
{
private:
    int x1,x2,y1,y2;
public:
    Reta(int x1,int y1, int x2,int y2);
    void draw(Screen &t);
};

#endif // RETA_H
