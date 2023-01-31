#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>

class Circulo : public QPoint
{
    int ancho_x;
    int ancho_y;
    int ta;
public:
    Circulo();
    Circulo(int xpos, int ypos, int size);
    int getTa() const;
    void setTa(int value);
    int getAncho() const;
    void setAncho(int value);
    int getAncho_x() const;
    void setAncho_x(int value);
};

#endif // CIRCULO_H
