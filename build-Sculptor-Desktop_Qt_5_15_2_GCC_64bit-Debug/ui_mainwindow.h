/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <interface.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionExit;
    QAction *actionSave;
    QAction *actionputvoxel;
    QAction *actionputbox;
    QAction *actioncutvoxel;
    QAction *actioncutbox;
    QAction *actionputshera;
    QAction *actioncutsphera;
    QAction *actionputellipsoid;
    QAction *actioncutellipsoid;
    QWidget *centralwidget;
    Interface *widget;
    QWidget *widget1;
    QFormLayout *formLayout;
    QGroupBox *groupBox_Esfera;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QLabel *labelRaio;
    QSlider *horizontalSliderSphere;
    QLabel *labelRaio_1;
    QGroupBox *groupBox_Posicao;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_2;
    QLabel *label_x;
    QSlider *horizontalSlider_x;
    QLabel *labelX_1;
    QSpacerItem *verticalSpacer_xy;
    QSplitter *splitter_3;
    QLabel *label_y;
    QSlider *horizontalSlider_y;
    QLabel *labelY_1;
    QSpacerItem *verticalSpacer_yz;
    QSplitter *splitter_4;
    QLabel *label_z;
    QSlider *horizontalSlider_z;
    QLabel *labelZ_1;
    QGroupBox *groupBox_Posicao_2;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_5;
    QLabel *label_Rx;
    QSlider *horizontalSlider_Rx;
    QLabel *labelRx_2;
    QSpacerItem *verticalSpacer_Rxy;
    QSplitter *splitter_6;
    QLabel *label_Ry;
    QSlider *horizontalSlider_Ry;
    QLabel *labelRy_2;
    QSpacerItem *verticalSpacer_Ryz;
    QSplitter *splitter_7;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Rz;
    QSlider *horizontalSlider_Rz;
    QLabel *labelRz_2;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdNumber_valueX;
    QLCDNumber *lcdNumber_valueY;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(834, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionputvoxel = new QAction(MainWindow);
        actionputvoxel->setObjectName(QString::fromUtf8("actionputvoxel"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/incones/recursos/putvoxel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionputvoxel->setIcon(icon);
        actionputbox = new QAction(MainWindow);
        actionputbox->setObjectName(QString::fromUtf8("actionputbox"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/incones/recursos/putbox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionputbox->setIcon(icon1);
        actioncutvoxel = new QAction(MainWindow);
        actioncutvoxel->setObjectName(QString::fromUtf8("actioncutvoxel"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/incones/recursos/cutvoxel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioncutvoxel->setIcon(icon2);
        actioncutbox = new QAction(MainWindow);
        actioncutbox->setObjectName(QString::fromUtf8("actioncutbox"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/incones/recursos/cutbox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioncutbox->setIcon(icon3);
        actionputshera = new QAction(MainWindow);
        actionputshera->setObjectName(QString::fromUtf8("actionputshera"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/incones/recursos/putsphera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionputshera->setIcon(icon4);
        actioncutsphera = new QAction(MainWindow);
        actioncutsphera->setObjectName(QString::fromUtf8("actioncutsphera"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/incones/recursos/cutsphera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioncutsphera->setIcon(icon5);
        actionputellipsoid = new QAction(MainWindow);
        actionputellipsoid->setObjectName(QString::fromUtf8("actionputellipsoid"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/incones/recursos/putelipsoid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionputellipsoid->setIcon(icon6);
        actioncutellipsoid = new QAction(MainWindow);
        actioncutellipsoid->setObjectName(QString::fromUtf8("actioncutellipsoid"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/incones/recursos/cutelipsoide.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioncutellipsoid->setIcon(icon7);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new Interface(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 10, 481, 331));
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(606, 10, 155, 425));
        formLayout = new QFormLayout(widget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_Esfera = new QGroupBox(widget1);
        groupBox_Esfera->setObjectName(QString::fromUtf8("groupBox_Esfera"));
        verticalLayout_2 = new QVBoxLayout(groupBox_Esfera);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter = new QSplitter(groupBox_Esfera);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        labelRaio = new QLabel(splitter);
        labelRaio->setObjectName(QString::fromUtf8("labelRaio"));
        splitter->addWidget(labelRaio);
        horizontalSliderSphere = new QSlider(splitter);
        horizontalSliderSphere->setObjectName(QString::fromUtf8("horizontalSliderSphere"));
        horizontalSliderSphere->setOrientation(Qt::Horizontal);
        splitter->addWidget(horizontalSliderSphere);
        labelRaio_1 = new QLabel(splitter);
        labelRaio_1->setObjectName(QString::fromUtf8("labelRaio_1"));
        splitter->addWidget(labelRaio_1);

        verticalLayout_2->addWidget(splitter);


        formLayout->setWidget(0, QFormLayout::LabelRole, groupBox_Esfera);

        groupBox_Posicao = new QGroupBox(widget1);
        groupBox_Posicao->setObjectName(QString::fromUtf8("groupBox_Posicao"));
        verticalLayout = new QVBoxLayout(groupBox_Posicao);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter_2 = new QSplitter(groupBox_Posicao);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_x = new QLabel(splitter_2);
        label_x->setObjectName(QString::fromUtf8("label_x"));
        splitter_2->addWidget(label_x);
        horizontalSlider_x = new QSlider(splitter_2);
        horizontalSlider_x->setObjectName(QString::fromUtf8("horizontalSlider_x"));
        horizontalSlider_x->setOrientation(Qt::Horizontal);
        splitter_2->addWidget(horizontalSlider_x);
        labelX_1 = new QLabel(splitter_2);
        labelX_1->setObjectName(QString::fromUtf8("labelX_1"));
        splitter_2->addWidget(labelX_1);

        verticalLayout->addWidget(splitter_2);

        verticalSpacer_xy = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_xy);

        splitter_3 = new QSplitter(groupBox_Posicao);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        label_y = new QLabel(splitter_3);
        label_y->setObjectName(QString::fromUtf8("label_y"));
        splitter_3->addWidget(label_y);
        horizontalSlider_y = new QSlider(splitter_3);
        horizontalSlider_y->setObjectName(QString::fromUtf8("horizontalSlider_y"));
        horizontalSlider_y->setOrientation(Qt::Horizontal);
        splitter_3->addWidget(horizontalSlider_y);
        labelY_1 = new QLabel(splitter_3);
        labelY_1->setObjectName(QString::fromUtf8("labelY_1"));
        splitter_3->addWidget(labelY_1);

        verticalLayout->addWidget(splitter_3);

        verticalSpacer_yz = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_yz);

        splitter_4 = new QSplitter(groupBox_Posicao);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        label_z = new QLabel(splitter_4);
        label_z->setObjectName(QString::fromUtf8("label_z"));
        splitter_4->addWidget(label_z);
        horizontalSlider_z = new QSlider(splitter_4);
        horizontalSlider_z->setObjectName(QString::fromUtf8("horizontalSlider_z"));
        horizontalSlider_z->setOrientation(Qt::Horizontal);
        splitter_4->addWidget(horizontalSlider_z);
        labelZ_1 = new QLabel(splitter_4);
        labelZ_1->setObjectName(QString::fromUtf8("labelZ_1"));
        splitter_4->addWidget(labelZ_1);

        verticalLayout->addWidget(splitter_4);


        formLayout->setWidget(1, QFormLayout::LabelRole, groupBox_Posicao);

        groupBox_Posicao_2 = new QGroupBox(widget1);
        groupBox_Posicao_2->setObjectName(QString::fromUtf8("groupBox_Posicao_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_Posicao_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter_5 = new QSplitter(groupBox_Posicao_2);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        label_Rx = new QLabel(splitter_5);
        label_Rx->setObjectName(QString::fromUtf8("label_Rx"));
        splitter_5->addWidget(label_Rx);
        horizontalSlider_Rx = new QSlider(splitter_5);
        horizontalSlider_Rx->setObjectName(QString::fromUtf8("horizontalSlider_Rx"));
        horizontalSlider_Rx->setOrientation(Qt::Horizontal);
        splitter_5->addWidget(horizontalSlider_Rx);
        labelRx_2 = new QLabel(splitter_5);
        labelRx_2->setObjectName(QString::fromUtf8("labelRx_2"));
        splitter_5->addWidget(labelRx_2);

        verticalLayout_3->addWidget(splitter_5);

        verticalSpacer_Rxy = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_Rxy);

        splitter_6 = new QSplitter(groupBox_Posicao_2);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setOrientation(Qt::Horizontal);
        label_Ry = new QLabel(splitter_6);
        label_Ry->setObjectName(QString::fromUtf8("label_Ry"));
        splitter_6->addWidget(label_Ry);
        horizontalSlider_Ry = new QSlider(splitter_6);
        horizontalSlider_Ry->setObjectName(QString::fromUtf8("horizontalSlider_Ry"));
        horizontalSlider_Ry->setOrientation(Qt::Horizontal);
        splitter_6->addWidget(horizontalSlider_Ry);
        labelRy_2 = new QLabel(splitter_6);
        labelRy_2->setObjectName(QString::fromUtf8("labelRy_2"));
        splitter_6->addWidget(labelRy_2);

        verticalLayout_3->addWidget(splitter_6);

        verticalSpacer_Ryz = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_Ryz);

        splitter_7 = new QSplitter(groupBox_Posicao_2);
        splitter_7->setObjectName(QString::fromUtf8("splitter_7"));
        splitter_7->setOrientation(Qt::Horizontal);
        widget2 = new QWidget(splitter_7);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_Rz = new QLabel(widget2);
        label_Rz->setObjectName(QString::fromUtf8("label_Rz"));

        horizontalLayout_2->addWidget(label_Rz);

        horizontalSlider_Rz = new QSlider(widget2);
        horizontalSlider_Rz->setObjectName(QString::fromUtf8("horizontalSlider_Rz"));
        horizontalSlider_Rz->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_Rz);

        labelRz_2 = new QLabel(widget2);
        labelRz_2->setObjectName(QString::fromUtf8("labelRz_2"));

        horizontalLayout_2->addWidget(labelRz_2);

        splitter_7->addWidget(widget2);

        verticalLayout_3->addWidget(splitter_7);


        formLayout->setWidget(2, QFormLayout::LabelRole, groupBox_Posicao_2);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(390, 350, 136, 25));
        horizontalLayout = new QHBoxLayout(widget3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber_valueX = new QLCDNumber(widget3);
        lcdNumber_valueX->setObjectName(QString::fromUtf8("lcdNumber_valueX"));
        lcdNumber_valueX->setFocusPolicy(Qt::NoFocus);
        lcdNumber_valueX->setContextMenuPolicy(Qt::CustomContextMenu);
        lcdNumber_valueX->setSmallDecimalPoint(false);
        lcdNumber_valueX->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber_valueX);

        lcdNumber_valueY = new QLCDNumber(widget3);
        lcdNumber_valueY->setObjectName(QString::fromUtf8("lcdNumber_valueY"));
        lcdNumber_valueY->setFocusPolicy(Qt::NoFocus);
        lcdNumber_valueY->setContextMenuPolicy(Qt::NoContextMenu);
        lcdNumber_valueY->setFrameShape(QFrame::Box);
        lcdNumber_valueY->setFrameShadow(QFrame::Raised);
        lcdNumber_valueY->setLineWidth(1);
        lcdNumber_valueY->setSmallDecimalPoint(false);
        lcdNumber_valueY->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber_valueY);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 834, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menuArquivo->addAction(actionNew);
        menuArquivo->addAction(actionSave);
        menuArquivo->addAction(actionExit);
        toolBar->addSeparator();
        toolBar->addAction(actionputvoxel);
        toolBar->addSeparator();
        toolBar->addAction(actioncutvoxel);
        toolBar->addSeparator();
        toolBar->addAction(actionputbox);
        toolBar->addSeparator();
        toolBar->addAction(actioncutbox);
        toolBar->addSeparator();
        toolBar->addAction(actionputshera);
        toolBar->addSeparator();
        toolBar->addAction(actioncutsphera);
        toolBar->addSeparator();
        toolBar->addAction(actionputellipsoid);
        toolBar->addSeparator();
        toolBar->addAction(actioncutellipsoid);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderSphere, SIGNAL(valueChanged(int)), labelRaio_1, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_x, SIGNAL(valueChanged(int)), labelX_1, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_y, SIGNAL(valueChanged(int)), labelY_1, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_z, SIGNAL(valueChanged(int)), labelZ_1, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New Draw", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Put</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionputvoxel->setText(QCoreApplication::translate("MainWindow", "putvoxel", nullptr));
#if QT_CONFIG(tooltip)
        actionputvoxel->setToolTip(QCoreApplication::translate("MainWindow", "putvoxel", nullptr));
#endif // QT_CONFIG(tooltip)
        actionputbox->setText(QCoreApplication::translate("MainWindow", "putbox", nullptr));
#if QT_CONFIG(tooltip)
        actionputbox->setToolTip(QCoreApplication::translate("MainWindow", "putbox", nullptr));
#endif // QT_CONFIG(tooltip)
        actioncutvoxel->setText(QCoreApplication::translate("MainWindow", "cutvoxel", nullptr));
#if QT_CONFIG(tooltip)
        actioncutvoxel->setToolTip(QCoreApplication::translate("MainWindow", "cutvoxel", nullptr));
#endif // QT_CONFIG(tooltip)
        actioncutbox->setText(QCoreApplication::translate("MainWindow", "cutbox", nullptr));
#if QT_CONFIG(tooltip)
        actioncutbox->setToolTip(QCoreApplication::translate("MainWindow", "cutbox", nullptr));
#endif // QT_CONFIG(tooltip)
        actionputshera->setText(QCoreApplication::translate("MainWindow", "putsphera", nullptr));
#if QT_CONFIG(tooltip)
        actionputshera->setToolTip(QCoreApplication::translate("MainWindow", "putsphera", nullptr));
#endif // QT_CONFIG(tooltip)
        actioncutsphera->setText(QCoreApplication::translate("MainWindow", "cutsphera", nullptr));
#if QT_CONFIG(tooltip)
        actioncutsphera->setToolTip(QCoreApplication::translate("MainWindow", "cutsphera", nullptr));
#endif // QT_CONFIG(tooltip)
        actionputellipsoid->setText(QCoreApplication::translate("MainWindow", "putellipsoid", nullptr));
#if QT_CONFIG(tooltip)
        actionputellipsoid->setToolTip(QCoreApplication::translate("MainWindow", "putellipsoid", nullptr));
#endif // QT_CONFIG(tooltip)
        actioncutellipsoid->setText(QCoreApplication::translate("MainWindow", "cutsellipsoid", nullptr));
#if QT_CONFIG(tooltip)
        actioncutellipsoid->setToolTip(QCoreApplication::translate("MainWindow", "cutellipsoid", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_Esfera->setTitle(QCoreApplication::translate("MainWindow", "Esfera", nullptr));
        labelRaio->setText(QCoreApplication::translate("MainWindow", "Raio", nullptr));
        labelRaio_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        groupBox_Posicao->setTitle(QCoreApplication::translate("MainWindow", "Posi\303\247\303\265es", nullptr));
        label_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        labelX_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_y->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        labelY_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_z->setText(QCoreApplication::translate("MainWindow", "z", nullptr));
        labelZ_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        groupBox_Posicao_2->setTitle(QCoreApplication::translate("MainWindow", "Sphera", nullptr));
        label_Rx->setText(QCoreApplication::translate("MainWindow", "Rx", nullptr));
        labelRx_2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_Ry->setText(QCoreApplication::translate("MainWindow", "Ry", nullptr));
        labelRy_2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_Rz->setText(QCoreApplication::translate("MainWindow", "Rz", nullptr));
        labelRz_2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
