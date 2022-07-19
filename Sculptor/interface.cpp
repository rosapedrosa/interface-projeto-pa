#include "interface.h"
#include "sculptor.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QMouseEvent>
#include <QDebug>
#include <QFileDialog>
#include <cmath>

using namespace std;

Interface::Interface(QWidget *parent)
    : QWidget{parent}
{
    nl = 30;
    nc = 30;
    np = 30;
    DimX = 30;
    DimY = 30;
    DimZ =30;
    mouseX = 5;
    mouseY = 5;

    escolha = "cutVoxel";
    sculptor = new Sculptor(nl, nc, np);
}

void Interface::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing);
    QBrush brush;
    QPen pen;

    //Desenha contor no tela desenho

    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);
    p.setBrush(brush);
    pen.setColor(QColor(255,0,0));
    pen.setWidth(1);
    p.setPen(pen);
    p.drawRect(1,1,width()-2, height()-2);




    //p.drawEllipse(1,1,width()/2, height()/2);
    //p.drawRect(5,5,width()/2, height()/2);


   // for(int k=0; k<np; k++){
        //for(int i = 0; i <nc; i++){
           // for(int j = 0; j <nl; j++){

                if(escolha == "putVoxel"){
                    brush.setColor(QColor(255,255,255));  //Editar escolha de cor
                    brush.setStyle(Qt::SolidPattern);
                    p.setBrush(brush);
                    p.drawRect(10,10,20,20); // posicao x, y da tela e tamanha
                    sculptor->putVoxel(10,10,10); // posiçao da pintura

                }
                if(escolha == "cutVoxel"){
                    brush.setColor(QColor(244));  //Editar escolha de cor
                    brush.setStyle(Qt::SolidPattern);
                    p.setBrush(brush);
                    p.drawRect(10,10,20,20); // posicao x, y da tela e tamanha
                    sculptor->cutVoxel(10,10,10); //posicao da pintura
                }
           // }
        //}

   // }
}
void Interface::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        pressed = true;
    }
    emit value_xy(event->x(), event->y());


    //mouseX = (int) (((1.0*(1.0*(event->x()-1.0*(1.0*np*50)/dx)))/(width()-50))*dx);
    //mouseY = (int) (((1.0*(1.0*(event->y()-1.0*(1.0*np*50)/dy)))/(height()-50))*dy);
    //Draw();

}

void Interface::mouseMoveEvent(QMouseEvent *event)
{

    if(event->button() == Qt::LeftButton){
        pressed = true;
    }

    emit value_xy(event->x(), event->y());

}

void Interface::mouseReleaseEvent(QMouseEvent *event)
{
   pressed = false;
}



void Interface:: setPutVoxel()
{
    escolha = "putVoxel";
}

void Interface::setCutVoxel()
{
    escolha = "cutVoxel";
}





