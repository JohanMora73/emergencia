#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QMediaPlayer>
#include <math.h>
#include "player.h"
#include "enemy.h"

class Game: public QGraphicsView
{
public:
    int EnemyDirection();
    //void EnemyMov(int op);

    Game(QWidget * parent =0);
    QGraphicsScene * scene;
    QTimer * timer;
    Player * jugador;
    Enemy * enemigo;


//signals:
//public slots: //Funciones que trabaja por si sola sin necesidad de yo estarla llamando
  //  void EnemyMov();
};

#endif // GAME_H
