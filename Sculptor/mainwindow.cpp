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
            SLOT(Dimx));


    connect(ui->actionputvoxel,
            SIGNAL(triggered()),
            ui->widget,
            SLOT(setPutVoxel()));

     connect(ui->actionputvoxel, SIGNAL(triggered(bool)), ui->widget, SLOT(setPutMetodoVoxel()));


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
      // sculptor.writeOFF("aa.off");

}
}
void MainWindow::novoDesenho()
{   Dialog d;
    d.exec();
}




