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
    std::vector<std::vector<Voxel>>drawSculptor;

public:

    explicit Interface(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void Draw();


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


};

#endif // INTERFACE_H
