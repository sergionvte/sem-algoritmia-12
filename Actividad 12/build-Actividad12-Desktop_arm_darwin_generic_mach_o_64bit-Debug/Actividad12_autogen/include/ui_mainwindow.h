/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionPor_id;
    QAction *actionPor_voltaje;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QSpinBox *posicionY_spinBox;
    QTextEdit *output;
    QLabel *label_2;
    QPushButton *show_neurons;
    QLabel *label;
    QLabel *label_4;
    QSpinBox *green_spinBox;
    QLabel *label_7;
    QLabel *label_3;
    QDoubleSpinBox *voltaje_spinBox;
    QSpinBox *blue_spinBox;
    QPushButton *submit_end;
    QPushButton *submit_start;
    QSpinBox *posicionX_spinBox;
    QLabel *label_6;
    QSpinBox *id_spinBox;
    QLabel *label_5;
    QSpinBox *red_spinBox;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QLineEdit *id_search;
    QTableWidget *tablaNeuronas;
    QGraphicsView *lienzo;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuOrdenar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1034, 589);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName("actionGuardar");
        actionPor_id = new QAction(MainWindow);
        actionPor_id->setObjectName("actionPor_id");
        actionPor_voltaje = new QAction(MainWindow);
        actionPor_voltaje->setObjectName("actionPor_voltaje");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        posicionY_spinBox = new QSpinBox(centralwidget);
        posicionY_spinBox->setObjectName("posicionY_spinBox");
        posicionY_spinBox->setMaximum(1000);

        gridLayout->addWidget(posicionY_spinBox, 3, 1, 1, 1);

        output = new QTextEdit(centralwidget);
        output->setObjectName("output");

        gridLayout->addWidget(output, 8, 0, 1, 2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        show_neurons = new QPushButton(centralwidget);
        show_neurons->setObjectName("show_neurons");

        gridLayout->addWidget(show_neurons, 10, 0, 1, 2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        green_spinBox = new QSpinBox(centralwidget);
        green_spinBox->setObjectName("green_spinBox");
        green_spinBox->setMaximum(255);

        gridLayout->addWidget(green_spinBox, 5, 1, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        voltaje_spinBox = new QDoubleSpinBox(centralwidget);
        voltaje_spinBox->setObjectName("voltaje_spinBox");
        voltaje_spinBox->setMaximum(1000.000000000000000);

        gridLayout->addWidget(voltaje_spinBox, 1, 1, 1, 1);

        blue_spinBox = new QSpinBox(centralwidget);
        blue_spinBox->setObjectName("blue_spinBox");
        blue_spinBox->setMaximum(255);

        gridLayout->addWidget(blue_spinBox, 6, 1, 1, 1);

        submit_end = new QPushButton(centralwidget);
        submit_end->setObjectName("submit_end");

        gridLayout->addWidget(submit_end, 7, 1, 1, 1);

        submit_start = new QPushButton(centralwidget);
        submit_start->setObjectName("submit_start");

        gridLayout->addWidget(submit_start, 7, 0, 1, 1);

        posicionX_spinBox = new QSpinBox(centralwidget);
        posicionX_spinBox->setObjectName("posicionX_spinBox");
        posicionX_spinBox->setMaximum(1000);

        gridLayout->addWidget(posicionX_spinBox, 2, 1, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        id_spinBox = new QSpinBox(centralwidget);
        id_spinBox->setObjectName("id_spinBox");
        id_spinBox->setMinimum(1);
        id_spinBox->setMaximum(999);

        gridLayout->addWidget(id_spinBox, 0, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        red_spinBox = new QSpinBox(centralwidget);
        red_spinBox->setObjectName("red_spinBox");
        red_spinBox->setMaximum(255);

        gridLayout->addWidget(red_spinBox, 4, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        gridLayout_2->addWidget(pushButton, 0, 2, 1, 1);

        id_search = new QLineEdit(centralwidget);
        id_search->setObjectName("id_search");

        gridLayout_2->addWidget(id_search, 0, 1, 1, 1);

        tablaNeuronas = new QTableWidget(centralwidget);
        tablaNeuronas->setObjectName("tablaNeuronas");

        gridLayout_2->addWidget(tablaNeuronas, 2, 0, 1, 2);

        lienzo = new QGraphicsView(centralwidget);
        lienzo->setObjectName("lienzo");

        gridLayout_2->addWidget(lienzo, 2, 2, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1034, 42));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName("menuArchivo");
        menuOrdenar = new QMenu(menubar);
        menuOrdenar->setObjectName("menuOrdenar");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(id_spinBox, voltaje_spinBox);
        QWidget::setTabOrder(voltaje_spinBox, posicionX_spinBox);
        QWidget::setTabOrder(posicionX_spinBox, posicionY_spinBox);
        QWidget::setTabOrder(posicionY_spinBox, red_spinBox);
        QWidget::setTabOrder(red_spinBox, green_spinBox);
        QWidget::setTabOrder(green_spinBox, blue_spinBox);
        QWidget::setTabOrder(blue_spinBox, submit_start);
        QWidget::setTabOrder(submit_start, submit_end);
        QWidget::setTabOrder(submit_end, output);
        QWidget::setTabOrder(output, show_neurons);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuOrdenar->menuAction());
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        menuOrdenar->addAction(actionPor_id);
        menuOrdenar->addAction(actionPor_voltaje);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
        actionPor_id->setText(QCoreApplication::translate("MainWindow", "Por id", nullptr));
        actionPor_voltaje->setText(QCoreApplication::translate("MainWindow", "Por voltaje", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Voltaje", nullptr));
        show_neurons->setText(QCoreApplication::translate("MainWindow", "Mostrar informaci\303\263n de las neuronas", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n Y", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n X", nullptr));
        submit_end->setText(QCoreApplication::translate("MainWindow", "Agregar al final", nullptr));
        submit_start->setText(QCoreApplication::translate("MainWindow", "Agregar al inicio", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Dibujar neuronas", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Buscar ID:", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
        menuOrdenar->setTitle(QCoreApplication::translate("MainWindow", "Ordenar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
