/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QComboBox *serialPortInfoListBox;
    QPushButton *btnLoad;
    QPushButton *btnOpenSerialPort;
    QLabel *label;
    QLabel *leFallState;
    QCustomPlot *plottsgram;
    QTabWidget *tw;
    QWidget *tab;
    QPushButton *btnGetFallDuration;
    QLineEdit *leFallDuration;
    QPushButton *btnGetHeightInst;
    QLineEdit *leHeightInstallation;
    QPushButton *btnGetAngleInst;
    QLineEdit *leAngleXInstallation;
    QLineEdit *leAngleYInstallation;
    QLineEdit *leAngleZInstallation;
    QPushButton *btnCmdInitCompleteCek;
    QLineEdit *leInitComplete;
    QPushButton *btnGetFirmwareVersion;
    QLineEdit *leFirmwareVersion;
    QPushButton *btnHWModel;
    QLineEdit *leHWModel;
    QPushButton *btnGetProductModel;
    QLineEdit *leProductModel;
    QPushButton *btnGetProductID;
    QLineEdit *leProductID;
    QWidget *tab_2;
    QFrame *frame;
    QCheckBox *cbPresence;
    QLineEdit *lePresence;
    QFrame *frameFallDetection;
    QCheckBox *cbFallDetection;
    QFrame *frameFallDetection_2;
    QLineEdit *leFallDetection;
    QFrame *frame_2;
    QCheckBox *cbStandStill;
    QFrame *frame_3;
    QCheckBox *cbStandStill_2;
    QLineEdit *leGetStandStill;
    QPushButton *btnSetHeight;
    QLineEdit *leSetHeight;
    QLineEdit *leSetFallDuration;
    QPushButton *btnSetFallDuration;
    QPushButton *btnSetAngle;
    QLineEdit *leAngleX;
    QLineEdit *leAngleY;
    QLineEdit *leAngleZ;
    QFrame *frame_4;
    QCheckBox *cbTraceTracking;
    QLineEdit *leTraceTracking;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *leMotion;
    QLineEdit *leStandStill;
    QLineEdit *leFallPosX;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *leFallPosY;
    QCustomPlot *plotRadar;
    QLineEdit *leTraceNumber;
    QLabel *label_6;
    QCustomPlot *plottsVelocity;
    QLineEdit *leVelocity;
    QLabel *label_7;
    QPlainTextEdit *logEdit;
    QPushButton *btnTestFall;
    QCheckBox *cbSocket;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1037, 763);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        serialPortInfoListBox = new QComboBox(centralWidget);
        serialPortInfoListBox->setObjectName("serialPortInfoListBox");
        serialPortInfoListBox->setGeometry(QRect(20, 0, 151, 32));
        btnLoad = new QPushButton(centralWidget);
        btnLoad->setObjectName("btnLoad");
        btnLoad->setGeometry(QRect(180, 0, 111, 61));
        btnOpenSerialPort = new QPushButton(centralWidget);
        btnOpenSerialPort->setObjectName("btnOpenSerialPort");
        btnOpenSerialPort->setEnabled(false);
        btnOpenSerialPort->setGeometry(QRect(20, 30, 141, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        btnOpenSerialPort->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 190, 81, 16));
        leFallState = new QLabel(centralWidget);
        leFallState->setObjectName("leFallState");
        leFallState->setGeometry(QRect(390, 170, 101, 131));
        leFallState->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 208);"));
        leFallState->setFrameShape(QFrame::Shape::Box);
        plottsgram = new QCustomPlot(centralWidget);
        plottsgram->setObjectName("plottsgram");
        plottsgram->setGeometry(QRect(510, 10, 511, 211));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plottsgram->sizePolicy().hasHeightForWidth());
        plottsgram->setSizePolicy(sizePolicy);
        tw = new QTabWidget(centralWidget);
        tw->setObjectName("tw");
        tw->setGeometry(QRect(10, 70, 281, 451));
        tab = new QWidget();
        tab->setObjectName("tab");
        btnGetFallDuration = new QPushButton(tab);
        btnGetFallDuration->setObjectName("btnGetFallDuration");
        btnGetFallDuration->setGeometry(QRect(10, 360, 101, 51));
        leFallDuration = new QLineEdit(tab);
        leFallDuration->setObjectName("leFallDuration");
        leFallDuration->setGeometry(QRect(120, 370, 141, 31));
        btnGetHeightInst = new QPushButton(tab);
        btnGetHeightInst->setObjectName("btnGetHeightInst");
        btnGetHeightInst->setGeometry(QRect(10, 310, 101, 51));
        leHeightInstallation = new QLineEdit(tab);
        leHeightInstallation->setObjectName("leHeightInstallation");
        leHeightInstallation->setGeometry(QRect(120, 320, 141, 31));
        btnGetAngleInst = new QPushButton(tab);
        btnGetAngleInst->setObjectName("btnGetAngleInst");
        btnGetAngleInst->setGeometry(QRect(10, 260, 101, 51));
        leAngleXInstallation = new QLineEdit(tab);
        leAngleXInstallation->setObjectName("leAngleXInstallation");
        leAngleXInstallation->setGeometry(QRect(120, 270, 51, 31));
        leAngleYInstallation = new QLineEdit(tab);
        leAngleYInstallation->setObjectName("leAngleYInstallation");
        leAngleYInstallation->setGeometry(QRect(170, 270, 41, 31));
        leAngleZInstallation = new QLineEdit(tab);
        leAngleZInstallation->setObjectName("leAngleZInstallation");
        leAngleZInstallation->setGeometry(QRect(210, 270, 41, 31));
        btnCmdInitCompleteCek = new QPushButton(tab);
        btnCmdInitCompleteCek->setObjectName("btnCmdInitCompleteCek");
        btnCmdInitCompleteCek->setGeometry(QRect(10, 210, 101, 51));
        leInitComplete = new QLineEdit(tab);
        leInitComplete->setObjectName("leInitComplete");
        leInitComplete->setGeometry(QRect(120, 220, 141, 31));
        btnGetFirmwareVersion = new QPushButton(tab);
        btnGetFirmwareVersion->setObjectName("btnGetFirmwareVersion");
        btnGetFirmwareVersion->setGeometry(QRect(10, 160, 101, 51));
        leFirmwareVersion = new QLineEdit(tab);
        leFirmwareVersion->setObjectName("leFirmwareVersion");
        leFirmwareVersion->setGeometry(QRect(120, 170, 141, 31));
        btnHWModel = new QPushButton(tab);
        btnHWModel->setObjectName("btnHWModel");
        btnHWModel->setGeometry(QRect(10, 110, 101, 51));
        leHWModel = new QLineEdit(tab);
        leHWModel->setObjectName("leHWModel");
        leHWModel->setGeometry(QRect(120, 120, 141, 31));
        btnGetProductModel = new QPushButton(tab);
        btnGetProductModel->setObjectName("btnGetProductModel");
        btnGetProductModel->setGeometry(QRect(10, 60, 101, 51));
        leProductModel = new QLineEdit(tab);
        leProductModel->setObjectName("leProductModel");
        leProductModel->setGeometry(QRect(120, 70, 141, 31));
        btnGetProductID = new QPushButton(tab);
        btnGetProductID->setObjectName("btnGetProductID");
        btnGetProductID->setGeometry(QRect(10, 10, 101, 51));
        leProductID = new QLineEdit(tab);
        leProductID->setObjectName("leProductID");
        leProductID->setGeometry(QRect(120, 20, 141, 31));
        tw->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        frame = new QFrame(tab_2);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 10, 120, 41));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        cbPresence = new QCheckBox(frame);
        cbPresence->setObjectName("cbPresence");
        cbPresence->setGeometry(QRect(10, 10, 86, 20));
        lePresence = new QLineEdit(tab_2);
        lePresence->setObjectName("lePresence");
        lePresence->setGeometry(QRect(150, 10, 101, 41));
        frameFallDetection = new QFrame(tab_2);
        frameFallDetection->setObjectName("frameFallDetection");
        frameFallDetection->setGeometry(QRect(20, 50, 121, 41));
        frameFallDetection->setFrameShape(QFrame::Shape::StyledPanel);
        frameFallDetection->setFrameShadow(QFrame::Shadow::Raised);
        cbFallDetection = new QCheckBox(frameFallDetection);
        cbFallDetection->setObjectName("cbFallDetection");
        cbFallDetection->setGeometry(QRect(10, 10, 111, 20));
        frameFallDetection_2 = new QFrame(frameFallDetection);
        frameFallDetection_2->setObjectName("frameFallDetection_2");
        frameFallDetection_2->setGeometry(QRect(70, 40, 121, 41));
        frameFallDetection_2->setFrameShape(QFrame::Shape::StyledPanel);
        frameFallDetection_2->setFrameShadow(QFrame::Shadow::Raised);
        leFallDetection = new QLineEdit(tab_2);
        leFallDetection->setObjectName("leFallDetection");
        leFallDetection->setGeometry(QRect(150, 50, 101, 41));
        frame_2 = new QFrame(tab_2);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 90, 120, 41));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        cbStandStill = new QCheckBox(frame_2);
        cbStandStill->setObjectName("cbStandStill");
        cbStandStill->setGeometry(QRect(10, 10, 101, 20));
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(60, 40, 120, 41));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        cbStandStill_2 = new QCheckBox(frame_3);
        cbStandStill_2->setObjectName("cbStandStill_2");
        cbStandStill_2->setGeometry(QRect(10, 10, 101, 20));
        leGetStandStill = new QLineEdit(tab_2);
        leGetStandStill->setObjectName("leGetStandStill");
        leGetStandStill->setGeometry(QRect(150, 90, 101, 41));
        btnSetHeight = new QPushButton(tab_2);
        btnSetHeight->setObjectName("btnSetHeight");
        btnSetHeight->setGeometry(QRect(20, 170, 121, 51));
        leSetHeight = new QLineEdit(tab_2);
        leSetHeight->setObjectName("leSetHeight");
        leSetHeight->setGeometry(QRect(150, 170, 101, 41));
        leSetFallDuration = new QLineEdit(tab_2);
        leSetFallDuration->setObjectName("leSetFallDuration");
        leSetFallDuration->setGeometry(QRect(150, 220, 101, 41));
        btnSetFallDuration = new QPushButton(tab_2);
        btnSetFallDuration->setObjectName("btnSetFallDuration");
        btnSetFallDuration->setGeometry(QRect(20, 220, 121, 51));
        btnSetAngle = new QPushButton(tab_2);
        btnSetAngle->setObjectName("btnSetAngle");
        btnSetAngle->setGeometry(QRect(20, 270, 121, 51));
        leAngleX = new QLineEdit(tab_2);
        leAngleX->setObjectName("leAngleX");
        leAngleX->setGeometry(QRect(150, 270, 31, 41));
        leAngleY = new QLineEdit(tab_2);
        leAngleY->setObjectName("leAngleY");
        leAngleY->setGeometry(QRect(190, 270, 31, 41));
        leAngleZ = new QLineEdit(tab_2);
        leAngleZ->setObjectName("leAngleZ");
        leAngleZ->setGeometry(QRect(230, 270, 31, 41));
        frame_4 = new QFrame(tab_2);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(20, 130, 121, 41));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        cbTraceTracking = new QCheckBox(frame_4);
        cbTraceTracking->setObjectName("cbTraceTracking");
        cbTraceTracking->setGeometry(QRect(0, 10, 121, 20));
        leTraceTracking = new QLineEdit(tab_2);
        leTraceTracking->setObjectName("leTraceTracking");
        leTraceTracking->setGeometry(QRect(150, 130, 101, 41));
        tw->addTab(tab_2, QString());
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 130, 81, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 80, 81, 16));
        leMotion = new QLineEdit(centralWidget);
        leMotion->setObjectName("leMotion");
        leMotion->setGeometry(QRect(390, 70, 101, 41));
        leStandStill = new QLineEdit(centralWidget);
        leStandStill->setObjectName("leStandStill");
        leStandStill->setGeometry(QRect(390, 120, 101, 41));
        leStandStill->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 144, 255);"));
        leFallPosX = new QLineEdit(centralWidget);
        leFallPosX->setObjectName("leFallPosX");
        leFallPosX->setGeometry(QRect(390, 310, 101, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(310, 320, 51, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 350, 81, 16));
        leFallPosY = new QLineEdit(centralWidget);
        leFallPosY->setObjectName("leFallPosY");
        leFallPosY->setGeometry(QRect(390, 350, 101, 31));
        plotRadar = new QCustomPlot(centralWidget);
        plotRadar->setObjectName("plotRadar");
        plotRadar->setGeometry(QRect(520, 400, 501, 241));
        sizePolicy.setHeightForWidth(plotRadar->sizePolicy().hasHeightForWidth());
        plotRadar->setSizePolicy(sizePolicy);
        leTraceNumber = new QLineEdit(centralWidget);
        leTraceNumber->setObjectName("leTraceNumber");
        leTraceNumber->setGeometry(QRect(390, 430, 101, 41));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(300, 430, 81, 16));
        plottsVelocity = new QCustomPlot(centralWidget);
        plottsVelocity->setObjectName("plottsVelocity");
        plottsVelocity->setGeometry(QRect(510, 220, 511, 211));
        sizePolicy.setHeightForWidth(plottsVelocity->sizePolicy().hasHeightForWidth());
        plottsVelocity->setSizePolicy(sizePolicy);
        leVelocity = new QLineEdit(centralWidget);
        leVelocity->setObjectName("leVelocity");
        leVelocity->setGeometry(QRect(390, 390, 101, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(300, 400, 81, 16));
        logEdit = new QPlainTextEdit(centralWidget);
        logEdit->setObjectName("logEdit");
        logEdit->setGeometry(QRect(10, 530, 481, 111));
        btnTestFall = new QPushButton(centralWidget);
        btnTestFall->setObjectName("btnTestFall");
        btnTestFall->setGeometry(QRect(310, 210, 61, 61));
        cbSocket = new QCheckBox(centralWidget);
        cbSocket->setObjectName("cbSocket");
        cbSocket->setGeometry(QRect(300, 490, 86, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1037, 30));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tw->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnLoad->setText(QCoreApplication::translate("MainWindow", "LOAD", nullptr));
        btnOpenSerialPort->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "FALL STATE", nullptr));
        leFallState->setText(QCoreApplication::translate("MainWindow", "NOT FALL", nullptr));
        btnGetFallDuration->setText(QCoreApplication::translate("MainWindow", "Get Fall Duration", nullptr));
        btnGetHeightInst->setText(QCoreApplication::translate("MainWindow", "Get Height Inst", nullptr));
        btnGetAngleInst->setText(QCoreApplication::translate("MainWindow", "Get Angle Inst", nullptr));
        btnCmdInitCompleteCek->setText(QCoreApplication::translate("MainWindow", "Init Complete", nullptr));
        btnGetFirmwareVersion->setText(QCoreApplication::translate("MainWindow", "Firmware Ver", nullptr));
        btnHWModel->setText(QCoreApplication::translate("MainWindow", "H/W Model", nullptr));
        btnGetProductModel->setText(QCoreApplication::translate("MainWindow", "Product Model", nullptr));
        btnGetProductID->setText(QCoreApplication::translate("MainWindow", "Get Product ID", nullptr));
        tw->setTabText(tw->indexOf(tab), QCoreApplication::translate("MainWindow", "Specs", nullptr));
        cbPresence->setText(QCoreApplication::translate("MainWindow", "Presence", nullptr));
        cbFallDetection->setText(QCoreApplication::translate("MainWindow", "Fall Detection", nullptr));
        cbStandStill->setText(QCoreApplication::translate("MainWindow", "StandStill", nullptr));
        cbStandStill_2->setText(QCoreApplication::translate("MainWindow", "StandStill", nullptr));
        btnSetHeight->setText(QCoreApplication::translate("MainWindow", "Set Height Inst", nullptr));
        leSetHeight->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        leSetFallDuration->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btnSetFallDuration->setText(QCoreApplication::translate("MainWindow", "Set Fall Duration", nullptr));
        btnSetAngle->setText(QCoreApplication::translate("MainWindow", "Set Angle", nullptr));
        leAngleX->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        leAngleY->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        leAngleZ->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        cbTraceTracking->setText(QCoreApplication::translate("MainWindow", "Trace Tracking", nullptr));
        tw->setTabText(tw->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Setting", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "STAND STILL", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Motion", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Trace Number", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        btnTestFall->setText(QCoreApplication::translate("MainWindow", "FALL", nullptr));
        cbSocket->setText(QCoreApplication::translate("MainWindow", "Socket", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
