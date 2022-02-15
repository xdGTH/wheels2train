#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsScene>

#include <QPainter>
#include <QPixmap>

class scene : public QGraphicsScene
{
public:
    scene();
protected:
private:
    QPixmap * picture =nullptr;
    QPainter * painter = nullptr;
};

#endif // SCENE_H
