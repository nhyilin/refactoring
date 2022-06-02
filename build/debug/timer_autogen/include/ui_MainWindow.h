/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_4;
    QLabel *label_6;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QTextEdit *textEdit_2;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(886, 578);
        label_2 = new QLabel(MainWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(260, 20, 131, 31));
        label_2->setStyleSheet(QLatin1String("QLabel {\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 14px;\n"
"    color: #BDC8E2;\n"
"    background-color: #2E3648;\n"
"}\n"
""));
        label_2->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(MainWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 130, 714, 171));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMaximumSize(QSize(16777215, 50));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("QPushButton:pressed {\n"
"background-color: #1E90FF;\n"
"}"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);

        gridLayout->addWidget(label, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textEdit_5 = new QTextEdit(layoutWidget);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit_5->sizePolicy().hasHeightForWidth());
        textEdit_5->setSizePolicy(sizePolicy1);
        textEdit_5->setMaximumSize(QSize(16777215, 50));

        gridLayout_2->addWidget(textEdit_5, 0, 6, 1, 1);

        textEdit_4 = new QTextEdit(layoutWidget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setEnabled(true);
        sizePolicy1.setHeightForWidth(textEdit_4->sizePolicy().hasHeightForWidth());
        textEdit_4->setSizePolicy(sizePolicy1);
        textEdit_4->setMaximumSize(QSize(16777215, 50));

        gridLayout_2->addWidget(textEdit_4, 0, 4, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setEnabled(false);
        label_6->setMaximumSize(QSize(16777215, 50));

        gridLayout_2->addWidget(label_6, 0, 5, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(false);
        label_5->setMaximumSize(QSize(16777215, 50));

        gridLayout_2->addWidget(label_5, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton:pressed {\n"
"background-color: #1E90FF;\n"
"}"));

        gridLayout_2->addWidget(pushButton_2, 2, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(false);
        label_3->setMaximumSize(QSize(16777215, 50));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        textEdit_2 = new QTextEdit(layoutWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(true);
        sizePolicy1.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy1);
        textEdit_2->setMaximumSize(QSize(16777215, 50));

        gridLayout_2->addWidget(textEdit_2, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\247\243\351\224\201\345\256\214\346\225\264\345\212\237\350\203\275\357\274\214wx:nhyilin", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Seven \345\212\251\346\211\213", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\345\200\222\350\256\241\346\227\266\345\274\200\345\247\213", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "s", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\346\212\275\347\255\276\344\272\272\346\225\260", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\347\217\255\347\272\247\346\200\273\344\272\272\346\225\260", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\347\202\271\345\220\215\345\274\200\345\247\213", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\350\242\253\346\212\275\344\270\255\345\220\214\345\255\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
