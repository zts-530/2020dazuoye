#include "enemy.h"

enemy::enemy(QString pix,QPoint p):QObject(0),pixmap(pix){
    this->p=p;
};

void enemy::drawenemy(QPainter *painter){
    painter->drawPixmap(p.rx(),p.ry(),60,60,pixmap);
}
QPoint enemy::getpoint(){
    return this->p;
}
void enemy::setpoint(QPoint poi){
    this->p=poi;
}
void enemy::move(){
    QPropertyAnimation *animation = new QPropertyAnimation(this, "p");
    animation->setDuration(20000);
    animation->setStartValue(QPoint(1000,350));
    animation->setEndValue(QPoint(5,350));
    animation->start();
}
