#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QPropertyAnimation>
#include <QPixmap>
#include <QPainter>
#include <QPoint>
class enemy : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QPoint p READ getpoint WRITE setpoint)
public:
    enemy(QString pix,QPoint p);
    void drawenemy(QPainter * painter);
    QPoint getpoint();
    void setpoint(QPoint);
    void move();
private:
    QPixmap pixmap;
    QPoint p;
signals:

};

#endif // ENEMY_H
