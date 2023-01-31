#include "circulo.h"

int Circulo::getTa() const
{
    return ta;
}

void Circulo::setTa(int value)
{
    ta = value;
}

int Circulo::getAncho() const
{
    return ancho_y;
}

void Circulo::setAncho(int value)
{
    ancho_y = value;
}

int Circulo::getAncho_x() const
{
    return ancho_x;
}

void Circulo::setAncho_x(int value)
{
    ancho_x = value;
}

Circulo::Circulo()
{
    ancho_y=70;
    ancho_x=90;
    ta=79;
}

Circulo::Circulo(int xpos, int ypos, int size)
{
    this->ancho_x=xpos;
    this->ancho_y=ypos;
    this->ta=size;
}
