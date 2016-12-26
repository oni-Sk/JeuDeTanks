#ifndef TANK_H
#define TANK_H

#include "def.h"
#include "Obstacle.h"

#include <QGraphicsItem>
#include <QKeyEvent>
#include <QPainter>
#include <QDebug>
#include <QGraphicsScene>
#include <QList>
#include <QMutableListIterator>
#include <typeinfo>

class Tank: public QGraphicsItem{
private:
    bool tankEtat; //vrais si non-detruit faux si detruit
    int tankCapDeplacement; //initialisé à L/10
    int tankCanonAngle; // allant de 0 à 90 °
    int tankCanonPivot; // allant de 0 à 360 )
    int tankNbrObusT2; //initialisé à 10
    int tankNbrObusT3; //initialisé à 5

public:
    Tank(int X,int Y, QGraphicsItem *parent = 0);
    void keyPressEvent(QKeyEvent * event);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    friend class Joueur;
    friend class Individu;
    friend class Ordinateur;
};
#endif // TANK_H
