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




                if(escolha == "putVoxel"){

                    brush.setColor(QColor(244,0,0));  //Editar escolha de cor
                    brush.setStyle(Qt::SolidPattern);
                    p.setBrush(brush);
                    pen.setColor(QColor(244,0,0));
                    p.drawRect(mouseX, mouseY,DimX,DimY); // posicao x, y da tela e tamanha
                    sculptor->putVoxel(10,10,10); // posiçao da pintura

                }
                if(escolha == "cutVoxel"){
                    brush.setColor(QColor(255,255,255));  //Editar escolha de cor
                    brush.setStyle(Qt::SolidPattern);
                    p.setBrush(brush);
                    pen.setColor(QColor(255,255,255));
                    sculptor->cutVoxel(10,10,10); //posicao da pintura
}
                if(escolha == "putBox"){

                    brush.setColor(QColor(244,0,0));  //Editar escolha de cor
                    brush.setStyle(Qt::SolidPattern);
                    p.setBrush(brush);
                    pen.setColor(QColor(244,0,0));
                    p.drawRect(mouseX, mouseY,DimX,DimY); // posicao x, y da tela e tamanha
                    sculptor->putBox(DimX, DimY, DimZ, Rx, Ry,Rz); // posiçao da pintura

                }
                if(escolha == "cutBox"){
                    brush.setColor(QColor(255,255,255));  //Editar escolha de cor
                    brush.setStyle(Qt::SolidPattern);
                    p.setBrush(brush);
                    pen.setColor(QColor(255,255,255));
                    sculptor->putBox(DimX, DimY, DimZ, Rx, Ry,Rz); //posicao da pintura
}

                if(escolha == "putSphere"){

                    brush.setColor(QColor(244,0,0));  //Editar escolha de cor
                    brush.setStyle(Qt::SolidPattern);
                    p.setBrush(brush);
                    pen.setColor(QColor(244,0,0));                           
                    //.drawEllipse(DimX, DimY, DimZ,raio);// posicao x, y da tela e tamanha
                    sculptor->putSphere(10,10,10,2); // posiçao da pintura



                }
                if(escolha == "cutSphere"){
                    brush.setColor(QColor(255,255,255));  //Editar escolha de cor
                    brush.setStyle(Qt::SolidPattern);
                    p.setBrush(brush);
                    pen.setColor(QColor(255,255,255));
                    sculptor->cutSphere(10,10,10,2); //posicao da pintura
}


}

void Interface::mousePressEvent(QMouseEvent *event)
{


    if(event->button() == Qt::LeftButton){
        pressed = true;
    }
    emit value_xy(event->x(), event->y());

    mouseX = event->x();
    mouseY = event->y();




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

void Interface::salvaArquivo(QString s)
{
sculptor->writeOFF(s.toStdString().c_str());
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

    escolha = "putBox";
    repaint();
}

void Interface::setCutBox()
{

    escolha = "cutBox";
    repaint();
}

void Interface::setPutSphere()
{

    escolha = "putSphere";
    repaint();
}

void Interface::setCutSphere()
{

    escolha = "cutSphere";
    repaint();
}

void Interface::setPutEllipsoid()
{

    escolha = "putEllipsoid";
    repaint();
}

void Interface::setCutEllipsoid()
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





