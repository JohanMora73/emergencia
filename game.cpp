#include "game.h"
/*
int Game::EnemyDirection()
{
    int op=1500, op1, op2, op3, op4, resp;
    op1=sqrt(pow((enemigo->x()-10)-jugador->x(),2));
    op2=sqrt(pow((enemigo->y()-10)-jugador->y(),2));
    op3=sqrt(pow((enemigo->x()+10)-jugador->x(),2));
    op4=sqrt(pow((enemigo->y()+10)-jugador->y(),2));

    if(op>op1) {op=op1; resp=1;}
    if(op>op2) {op=op2; resp=2;}
    if(op>op3) {op=op3; resp=3;}
    if(op>op4) {op=op4; resp=4;}

    return resp;
}
*/

Game::Game(QWidget *parent)
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,700,600);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(700,600);

    jugador = new Player();
    jugador->setPos(340,280);
    jugador->setFlag(QGraphicsItem::ItemIsFocusable);
    jugador->setFocus();
    scene->addItem(jugador);

    enemigo = new Enemy();
    enemigo->setPos(enemigo->posx,enemigo->posy);
    scene->addItem(enemigo);

    //timer->start(500);
    //connect(timer,&QTimer::timeout,this,&Game::EnemyMov);

    show();
}
/*
void Game::EnemyMov()
{
    if(EnemyDirection()==1){
        //enemigo->setPosx(enemigo->x()-10);
        //enemigo->setPosy(enemigo->y());
        enemigo->setPos(enemigo->x()-10,enemigo->y());
    }
    else if(EnemyDirection()==2){
        //enemigo->setPosx(enemigo->x());
        //enemigo->setPosy(enemigo->y()-10);
        enemigo->setPos(enemigo->x(),enemigo->y()-10);
    }
    else if(EnemyDirection()==3){
        //enemigo->setPosx(enemigo->x()+10);
        //enemigo->setPosy(enemigo->y());
        enemigo->setPos(enemigo->x()+10,enemigo->y());
    }
    else if(EnemyDirection()==4){
        //enemigo->setPosx(enemigo->x());
        //enemigo->setPosy(enemigo->y()+10);
        enemigo->setPos(enemigo->x(),enemigo->y()+10);
    }
}
*/
