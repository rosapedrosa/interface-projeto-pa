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
    raio =2;
    Rx =  Ry =  Rz = 5;

    escolha = "l";
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


   // for(int k=0; k<np; k++){
        //for(int i = 0; i <nc; i++){
           // for(int j = 0; j <nl; j++){

                if(escolha == "putVoxel"){

                    brush.setColor(QColor(244,0,0));  //Editar escolha de cor
                    brush.setStyle(Qt::SolidPattern);
                    p.setBrush(brush);
                    pen.setColor(QColor(244,0,0));
                    p.drawRect(DimX,DimY,mouseX, mouseY); // posicao x, y da tela e tamanha
                    sculptor->putVoxel(10,10,10); // posiçao da pintura



                }
                if(escolha == "cutVoxel"){
                    brush.setColor(QColor(255,255,255));  //Editar escolha de cor
                    brush.setStyle(Qt::SolidPattern);
                    p.setBrush(brush);
                    pen.setColor(QColor(255,255,255));
                    sculptor->cutVoxel(10,10,10); //posicao da pintura
}

                if(escolha == "putSphere"){

                    brush.setColor(QColor(244,0,0));  //Editar escolha de cor
                    brush.setStyle(Qt::SolidPattern);
                    p.setBrush(brush);
                    pen.setColor(QColor(244,0,0));
                                       p.drawRect(DimX,DimY,mouseX, mouseY); // posicao x, y da tela e tamanha
                   // p.drawEllipse(10,10,10,raio);
                    //p.drawEllipse(10,10,mouseX, mouseY,raio); // posicao x, y da tela e tamanha
                    sculptor->putSphere(10,10,10,2); // posiçao da pintura



                }
                if(escolha == "cutSphere"){
                    brush.setColor(QColor(255,255,255));  //Editar escolha de cor
                    brush.setStyle(Qt::SolidPattern);
                    p.setBrush(brush);
                    pen.setColor(QColor(255,255,255));
                    sculptor->cutSphere(10,10,10,2); //posicao da pintura
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

    mouseX = event->x();
    mouseY = event->y();
    //mouseX = (int) (((1.0*(1.0*(event->x()-1.0*(1.0*np*50)/dx)))/(width()-50))*dx);
    //mouseY = (int) (((1.0*(1.0*(event->y()-1.0*(1.0*np*50)/dy)))/(height()-50))*dy);



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
    repaint();
}

void Interface::setCutVoxel()
{
    escolha = "cutVoxel";
    repaint();

}

void Interface::setPutBox()
{

    escolha = "PutBox";
    repaint();
}

void Interface::setCutBox()
{

    escolha = "cutBox";
    repaint();
}

void Interface::putSphere()
{

    escolha = "putSphere";
    repaint();
}

void Interface::cutSphere()
{

    escolha = "cutSphere";
    qDebug()<< escolha;
    repaint();
}

void Interface::putEllipsoid()
{

    escolha = "putEllipsoid";
    repaint();
}

void Interface::cutEllipsoid()
{

    escolha = "cutEllipsoid";
    repaint();
}

void Interface::mudaX(int x_)
{
    DimX = x_;
}

void Interface::mudaY(int y_)
{
    DimY = y_;
}

void Interface::mudaZ(int z_)
{
    DimZ = z_;
}

void Interface::mudaRaio(int raio_)
{
    raio = raio_;
}

void Interface::mudaRx(int rx_)
{
    Rx = rx_;
}

void Interface::mudaRy(int ry_)
{
    Ry = ry_;
}

void Interface::mudaRz(int rz_)
{
    Rz = rz_;
}





