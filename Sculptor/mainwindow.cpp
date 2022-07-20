#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "interface.h"
#include "sculptor.h"
#include "dialog.h"
#include <QFileDialog>
#include <QLCDNumber>
#include <QMessageBox>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->widget,
           SIGNAL(value_xy(int, int)),
           this,
            SLOT(posicaoXY(int,int)));

    connect(ui->actionSave,
            SIGNAL(triggered()),
            this,
            SLOT(salvaArquivo()));

    connect(ui->actionExit,
            SIGNAL(triggered()),
            this,
            SLOT(finaliza()));

    connect(ui->actionNew,
            SIGNAL(triggered()),
            this,
            SLOT(novoDesenho()));

    connect(ui->horizontalSlider_x,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudaX(int)));

    connect(ui->horizontalSlider_y,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudaY(int)));

    connect(ui->horizontalSlider_z,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudaZ(int)));

    connect(ui->actionputvoxel,
            SIGNAL(triggered()),
            ui->widget,
            SLOT(setPutVoxel()));

    connect(ui->actioncutvoxel,
            SIGNAL(triggered()),
            ui->widget,
            SLOT(setCutVoxel()));

    connect(ui->actionputbox,
            SIGNAL(triggered()),
            ui->widget,
            SLOT(setPutBox()));

    connect(ui->actioncutbox,
            SIGNAL(triggered()),
            ui->widget,
            SLOT(setCutBox()));

    connect(ui->actionputshera,
            SIGNAL(triggered()),
            ui->widget,
            SLOT(setPutSphere()));

    connect(ui->actioncutsphera,
            SIGNAL(triggered()),
            ui->widget,
            SLOT(setCutSphere()));

    connect(ui->actionputellipsoid,
            SIGNAL(triggered()),
            ui->widget,
            SLOT(setPutEllipsoid()));

    connect(ui->actioncutellipsoid,
            SIGNAL(triggered()),
            ui->widget,
            SLOT(setCutEllipsoid()));

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::posicaoXY(int x, int y)
{
    ui->lcdNumber_valueX->display(x);
    ui->lcdNumber_valueY->display(y);
}

void MainWindow::finaliza()
{
    exit(1);
}

void MainWindow::salvaArquivo()
{
    QFileDialog dialog;
    QString selectedFilter;
    QString filename =
            dialog.getSaveFileName(this,tr("Salvar"),
                                   QDir::currentPath(),
                                   tr("Arquivo OFF(*.off);;Arquivo OFF2(*.off2)"),
                                   &selectedFilter);
    if(filename.isNull()){
        return;
    }
    if(selectedFilter == "Arquivo OFF(*.off)"){
        // grava o arquivo
      ui->widget->salvaArquivo(filename);

}
}
void MainWindow::novoDesenho()
{   Dialog d;
    d.exec();
}



