#ifndef INDIVIDU_H
#define INDIVIDU_H

#include "Point.h"
#include "Tank.h"

#include <QGraphicsItemGroup>

class Individu : public QGraphicsItemGroup
{
private:
    Tank *tank;
public:
    Individu(Point posinit);
    void keyPressEvent(QKeyEvent * event);

};

#endif // INDIVIDU_H
