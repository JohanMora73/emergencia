#include "player.h"

Player::Player(QGraphicsItem *parent)
{
    timer = new QTimer();
    fila = 770;
    columna =5;
    pixmap = new QPixmap(":/recursos/Sprit Rick.png");
    setScale(0.5);
    //dimensiones de cada imagen
    ancho=125;
    alto=160;
    //timer->start(100);//tiempo con que cambia la imagen
    //connect(timer,&QTimer::timeout,this,&Player::Actualizacion);

}

void Player::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_A){
        if(pos().x() > 0 && pos().y()>0){
            setPos(x()-10,y()-10);
            Movimiento();
            fila=340;
        }
    }
    else if(event->key()==Qt::Key_Left){
        if(pos().x() > 0){
            setPos(x()-10,y());
            Movimiento();
            fila=340;
        }
    }

    else if(event->key()==Qt::Key_Right){
        if(pos().x() + 50 < 700){
            setPos(x()+10,y());
            Movimiento();
            fila=5;
        }
    }

    else if(event->key()==Qt::Key_Up){
        if(pos().y()>0){
            setPos(x(),y()-10);
            Movimiento();
            fila=505;
        }
    }

    else if(event->key()==Qt::Key_Down){
        if(pos().y()+50 < 600){
            setPos(x(),y()+10);
            Movimiento();
            fila=172;
        }
    }
}

void Player::Movimiento()
{
    columna +=130;
    if(columna>=520){
        columna=5;
    }
    this->update(-ancho/2,-alto/2,ancho,alto);

}

/*
void Player::Actualizacion()
{
    columna +=130;
    if(columna>=520){
        columna=5;
    }
    this->update(-ancho/2,-alto/2,ancho,alto);
}
*/

QRectF Player::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void Player::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columna,fila,ancho,alto);
}
