/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_x;
    QPushButton *pushButton_graph;
    QPushButton *pushButton_14;
    QPushButton *pushButton_4;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_div;
    QPushButton *pushButton_13;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_18;
    QPushButton *pushButton_10;
    QPushButton *pushButton;
    QPushButton *pushButton_12;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_bracket_open;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_16;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_2;
    QPushButton *pushButton_exp;
    QPushButton *pushButton_bracket_close;
    QPushButton *pushButton_3;
    QPushButton *pushButton_log;
    QPushButton *pushButton_15;
    QPushButton *pushButton_size;
    QCustomPlot *widget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_xmax;
    QLineEdit *lineEdit_ymax;
    QLineEdit *line_X;
    QLineEdit *lineEdit_xmin;
    QLineEdit *lineEdit_ymin;
    QMenuBar *menubar;
    QMenu *menuSmart_Calc;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(744, 402);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(361, 270));
        MainWindow->setMaximumSize(QSize(744, 402));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(169, 169, 169)"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:rgb(46, 47, 48)"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 0, 361, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        lineEdit->setFont(font);
        lineEdit->setCursor(QCursor(Qt::BlankCursor));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QString::fromUtf8("font: 36pt \"Arial\";\n"
"set color:rgb(169, 169, 169)\n"
"background-color:rgb(169, 169, 169)\n"
""));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setDragEnabled(false);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 60, 361, 251));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(18);
        gridLayoutWidget->setFont(font1);
        gridLayoutWidget->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2:0, y2: 1,\n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_x = new QPushButton(gridLayoutWidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_x->sizePolicy().hasHeightForWidth());
        pushButton_x->setSizePolicy(sizePolicy1);
        pushButton_x->setFont(font1);
        pushButton_x->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_x, 6, 1, 1, 2);

        pushButton_graph = new QPushButton(gridLayoutWidget);
        pushButton_graph->setObjectName(QString::fromUtf8("pushButton_graph"));
        sizePolicy1.setHeightForWidth(pushButton_graph->sizePolicy().hasHeightForWidth());
        pushButton_graph->setSizePolicy(sizePolicy1);
        pushButton_graph->setFont(font1);
        pushButton_graph->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_graph, 6, 3, 1, 4);

        pushButton_14 = new QPushButton(gridLayoutWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(24);
        pushButton_14->setFont(font2);
        pushButton_14->setStyleSheet(QString::fromUtf8("background-color:rgb(242, 163, 60)"));

        gridLayout->addWidget(pushButton_14, 4, 6, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 92, 93)\n"
"\n"
"\n"
"\n"
""));

        gridLayout->addWidget(pushButton_4, 4, 5, 1, 1);

        pushButton_sqrt = new QPushButton(gridLayoutWidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        sizePolicy1.setHeightForWidth(pushButton_sqrt->sizePolicy().hasHeightForWidth());
        pushButton_sqrt->setSizePolicy(sizePolicy1);
        pushButton_sqrt->setFont(font1);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_sqrt, 0, 0, 1, 1);

        pushButton_tan = new QPushButton(gridLayoutWidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        sizePolicy1.setHeightForWidth(pushButton_tan->sizePolicy().hasHeightForWidth());
        pushButton_tan->setSizePolicy(sizePolicy1);
        pushButton_tan->setFont(font1);
        pushButton_tan->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_tan, 4, 2, 1, 1);

        pushButton_div = new QPushButton(gridLayoutWidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        sizePolicy1.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy1);
        pushButton_div->setFont(font2);
        pushButton_div->setStyleSheet(QString::fromUtf8("background-color:rgb(242, 163, 60)"));

        gridLayout->addWidget(pushButton_div, 0, 6, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setFont(font2);
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color:rgb(242, 163, 60)"));

        gridLayout->addWidget(pushButton_13, 2, 6, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 92, 93)\n"
"\n"
"\n"
"\n"
""));

        gridLayout->addWidget(pushButton_6, 4, 4, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setFont(font2);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 92, 93)\n"
"\n"
"\n"
"\n"
""));

        gridLayout->addWidget(pushButton_7, 1, 4, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setFont(font2);
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 92, 93)\n"
"\n"
"\n"
"\n"
""));

        gridLayout->addWidget(pushButton_9, 2, 4, 1, 1);

        pushButton_18 = new QPushButton(gridLayoutWidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);
        pushButton_18->setFont(font1);
        pushButton_18->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_18, 0, 3, 1, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setFont(font2);
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 92, 93)\n"
"\n"
"\n"
"\n"
""));

        gridLayout->addWidget(pushButton_10, 5, 4, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 92, 93)\n"
"\n"
"\n"
"\n"
""));

        gridLayout->addWidget(pushButton, 2, 3, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setFont(font2);
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color:rgb(242, 163, 60)"));

        gridLayout->addWidget(pushButton_12, 1, 6, 1, 1);

        pushButton_atan = new QPushButton(gridLayoutWidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        sizePolicy1.setHeightForWidth(pushButton_atan->sizePolicy().hasHeightForWidth());
        pushButton_atan->setSizePolicy(sizePolicy1);
        pushButton_atan->setFont(font1);
        pushButton_atan->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_atan, 4, 0, 1, 1);

        pushButton_bracket_open = new QPushButton(gridLayoutWidget);
        pushButton_bracket_open->setObjectName(QString::fromUtf8("pushButton_bracket_open"));
        sizePolicy1.setHeightForWidth(pushButton_bracket_open->sizePolicy().hasHeightForWidth());
        pushButton_bracket_open->setSizePolicy(sizePolicy1);
        pushButton_bracket_open->setFont(font1);
        pushButton_bracket_open->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_bracket_open, 0, 4, 1, 1);

        pushButton_cos = new QPushButton(gridLayoutWidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        sizePolicy1.setHeightForWidth(pushButton_cos->sizePolicy().hasHeightForWidth());
        pushButton_cos->setSizePolicy(sizePolicy1);
        pushButton_cos->setSizeIncrement(QSize(4, 4));
        pushButton_cos->setFont(font1);
        pushButton_cos->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_cos, 2, 2, 1, 1);

        pushButton_16 = new QPushButton(gridLayoutWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);
        pushButton_16->setFont(font2);
        pushButton_16->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 92, 93)\n"
"\n"
"\n"
"\n"
""));

        gridLayout->addWidget(pushButton_16, 5, 3, 1, 1);

        pushButton_asin = new QPushButton(gridLayoutWidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        sizePolicy1.setHeightForWidth(pushButton_asin->sizePolicy().hasHeightForWidth());
        pushButton_asin->setSizePolicy(sizePolicy1);
        pushButton_asin->setFont(font1);
        pushButton_asin->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_asin, 1, 0, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setFont(font2);
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 92, 93)\n"
"\n"
"\n"
"\n"
""));

        gridLayout->addWidget(pushButton_8, 1, 3, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 92, 93)\n"
"\n"
"\n"
"\n"
""));

        gridLayout->addWidget(pushButton_5, 2, 5, 1, 1);

        pushButton_mod = new QPushButton(gridLayoutWidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        sizePolicy1.setHeightForWidth(pushButton_mod->sizePolicy().hasHeightForWidth());
        pushButton_mod->setSizePolicy(sizePolicy1);
        pushButton_mod->setFont(font1);
        pushButton_mod->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_mod, 0, 2, 1, 1);

        pushButton_sin = new QPushButton(gridLayoutWidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        sizePolicy1.setHeightForWidth(pushButton_sin->sizePolicy().hasHeightForWidth());
        pushButton_sin->setSizePolicy(sizePolicy1);
        pushButton_sin->setFont(font1);
        pushButton_sin->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_sin, 1, 2, 1, 1);

        pushButton_ln = new QPushButton(gridLayoutWidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        sizePolicy1.setHeightForWidth(pushButton_ln->sizePolicy().hasHeightForWidth());
        pushButton_ln->setSizePolicy(sizePolicy1);
        pushButton_ln->setFont(font1);
        pushButton_ln->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_ln, 5, 0, 1, 1);

        pushButton_acos = new QPushButton(gridLayoutWidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        sizePolicy1.setHeightForWidth(pushButton_acos->sizePolicy().hasHeightForWidth());
        pushButton_acos->setSizePolicy(sizePolicy1);
        pushButton_acos->setFont(font1);
        pushButton_acos->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_acos, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 92, 93)\n"
"\n"
"\n"
"\n"
""));

        gridLayout->addWidget(pushButton_2, 1, 5, 1, 1);

        pushButton_exp = new QPushButton(gridLayoutWidget);
        pushButton_exp->setObjectName(QString::fromUtf8("pushButton_exp"));
        sizePolicy1.setHeightForWidth(pushButton_exp->sizePolicy().hasHeightForWidth());
        pushButton_exp->setSizePolicy(sizePolicy1);
        pushButton_exp->setFont(font2);
        pushButton_exp->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_exp, 6, 0, 1, 1);

        pushButton_bracket_close = new QPushButton(gridLayoutWidget);
        pushButton_bracket_close->setObjectName(QString::fromUtf8("pushButton_bracket_close"));
        sizePolicy1.setHeightForWidth(pushButton_bracket_close->sizePolicy().hasHeightForWidth());
        pushButton_bracket_close->setSizePolicy(sizePolicy1);
        pushButton_bracket_close->setFont(font1);
        pushButton_bracket_close->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_bracket_close, 0, 5, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 92, 93)\n"
"\n"
"\n"
"\n"
""));

        gridLayout->addWidget(pushButton_3, 4, 3, 1, 1);

        pushButton_log = new QPushButton(gridLayoutWidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        sizePolicy1.setHeightForWidth(pushButton_log->sizePolicy().hasHeightForWidth());
        pushButton_log->setSizePolicy(sizePolicy1);
        pushButton_log->setFont(font1);
        pushButton_log->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 61)"));

        gridLayout->addWidget(pushButton_log, 5, 2, 1, 1);

        pushButton_15 = new QPushButton(gridLayoutWidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setSizeIncrement(QSize(0, 0));
        pushButton_15->setFont(font2);
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color:rgb(242, 163, 60)"));

        gridLayout->addWidget(pushButton_15, 5, 6, 1, 1);

        pushButton_size = new QPushButton(gridLayoutWidget);
        pushButton_size->setObjectName(QString::fromUtf8("pushButton_size"));
        sizePolicy1.setHeightForWidth(pushButton_size->sizePolicy().hasHeightForWidth());
        pushButton_size->setSizePolicy(sizePolicy1);
        pushButton_size->setFont(font2);
        pushButton_size->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 92, 93)\n"
"\n"
"\n"
"\n"
""));

        gridLayout->addWidget(pushButton_size, 5, 5, 1, 1);

        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(363, 0, 381, 401));
        widget->setStyleSheet(QString::fromUtf8("background-color:rgb(146, 146, 146)"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 310, 361, 97));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(4, 0, 0, 0);
        lineEdit_xmax = new QLineEdit(layoutWidget);
        lineEdit_xmax->setObjectName(QString::fromUtf8("lineEdit_xmax"));
        lineEdit_xmax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lineEdit_xmax, 1, 1, 1, 1);

        lineEdit_ymax = new QLineEdit(layoutWidget);
        lineEdit_ymax->setObjectName(QString::fromUtf8("lineEdit_ymax"));
        lineEdit_ymax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lineEdit_ymax, 1, 2, 1, 1);

        line_X = new QLineEdit(layoutWidget);
        line_X->setObjectName(QString::fromUtf8("line_X"));
        line_X->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(line_X, 0, 0, 1, 1);

        lineEdit_xmin = new QLineEdit(layoutWidget);
        lineEdit_xmin->setObjectName(QString::fromUtf8("lineEdit_xmin"));
        lineEdit_xmin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lineEdit_xmin, 0, 1, 1, 1);

        lineEdit_ymin = new QLineEdit(layoutWidget);
        lineEdit_ymin->setObjectName(QString::fromUtf8("lineEdit_ymin"));
        lineEdit_ymin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lineEdit_ymin, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        lineEdit->raise();
        gridLayoutWidget->raise();
        layoutWidget->raise();
        widget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 744, 24));
        menuSmart_Calc = new QMenu(menubar);
        menuSmart_Calc->setObjectName(QString::fromUtf8("menuSmart_Calc"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuSmart_Calc->menuAction());
        menuSmart_Calc->addAction(action);
        menuSmart_Calc->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
#if QT_CONFIG(shortcut)
        action->setShortcut(QCoreApplication::translate("MainWindow", "Meta+H", nullptr));
#endif // QT_CONFIG(shortcut)
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_graph->setText(QCoreApplication::translate("MainWindow", "graph", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_graph->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "\342\200\223", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_18->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_bracket_open->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_exp->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_bracket_close->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_15->setShortcut(QCoreApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_size->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        lineEdit_xmax->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        lineEdit_xmax->setPlaceholderText(QCoreApplication::translate("MainWindow", "x max", nullptr));
        lineEdit_ymax->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        lineEdit_ymax->setPlaceholderText(QCoreApplication::translate("MainWindow", "y max", nullptr));
        line_X->setPlaceholderText(QCoreApplication::translate("MainWindow", "x value", nullptr));
        lineEdit_xmin->setText(QCoreApplication::translate("MainWindow", "-5", nullptr));
        lineEdit_xmin->setPlaceholderText(QCoreApplication::translate("MainWindow", "x min", nullptr));
        lineEdit_ymin->setText(QCoreApplication::translate("MainWindow", "-5", nullptr));
        lineEdit_ymin->setPlaceholderText(QCoreApplication::translate("MainWindow", "y min", nullptr));
        menuSmart_Calc->setTitle(QCoreApplication::translate("MainWindow", "Smart Calc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
