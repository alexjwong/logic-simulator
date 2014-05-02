/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(820, 578);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 101, 101));
        graphicsView_2 = new QGraphicsView(centralWidget);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(10, 120, 101, 421));
        graphicsView_3 = new QGraphicsView(centralWidget);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(120, 10, 601, 531));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(730, 40, 81, 501));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(730, 10, 81, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 820, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
#ifndef QT_NO_TOOLTIP
        graphicsView->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>I/O</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        graphicsView_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Gates</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        graphicsView_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Circuit Simulator</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        textEdit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Circuit information</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Run the circuit</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("MainWindow", "Simulate!", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
