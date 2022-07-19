#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>
#include <vector>
#include <QVector>
#include "sculptor.h"


class Interface : public QWidget
{
    Q_OBJECT
private:
    bool pressed;
    int mouseX, mouseY, mouseZ;
    Sculptor* sculptor;


public:

    explicit Interface(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    QString escolha;
    int nl,nc,np, dx, dy, dz;
    int DimX, DimY, DimZ;
    int raio;
    int Rx, Ry, Rz;

signals:
     void value_xy(int, int);

public slots:
     void setPutVoxel();
     void setCutVoxel();
     void setPutBox();
     void setCutBox();
     void putSphere();
     void cutSphere();
     void putEllipsoid();
     void cutEllipsoid();
     void mudaX(int x_);
     void mudaY(int y_);
     void mudaZ(int z_);
     void mudaRaio(int raio_);
     void mudaRx (int rx_);
     void mudaRy (int ry_);
     void mudaRz (int rz_);
};

#endif // INTERFACE_H
