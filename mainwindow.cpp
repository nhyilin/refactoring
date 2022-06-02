//
// Created by 裴奕霖 on 2022/5/27.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include <QMessageBox>
#include "mainwindow.h"
#include "ui_MainWindow.h"
#include <QtCore>
#include <QTimer>
#include "DataManager.h"
#include "Student.h"

MainWindow::MainWindow(QWidget *parent) :
        QWidget(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(myslot()));
    setVisible(ui->gridLayout);
    ui->label_2->setFrameStyle(QFrame::Box | QFrame::Raised);
    ui->label_2->setAlignment(Qt::AlignCenter);
    
    ui->pushButton->setFocus();
    ui->pushButton->setDefault(true);
    ui->textEdit->installEventFilter(this);//设置完后自动调用其eventFilter函数
    
    
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::myslot() {
    QMessageBox::warning(this, "timer", QObject::trUtf8("时间到!"));
    timer->stop();
}

void MainWindow::on_pushButton_clicked() {
    QString str = ui->textEdit->toPlainText();
    bool OK;
    int num = str.toInt(&OK, 10);
    num *= 1000;
    timer->start(num);
}

bool MainWindow::eventFilter(QObject *target, QEvent *event) {
    if (target == ui->textEdit) {
        if (event->type() == QEvent::KeyPress) {//回车键
            QKeyEvent *k = static_cast<QKeyEvent *>(event);
            
            if (k->key() == Qt::Key_Return) {
                on_pushButton_clicked();        //需要响应的函数事件，以这里的按钮为例
                return true;
            }
        }
    }
    return QWidget::eventFilter(target, event);
}

void MainWindow::on_pushButton_2_clicked() {
    int total = ui->textEdit_4->toPlainText().toInt();
    int selected = ui->textEdit_5->toPlainText().toInt();
    DataManager::GetInstance()->generate(total);
    std::vector<Student> person;
    DataManager::GetInstance()->getPersons(person);
    
    std::vector<Student> selectedPerson;
    for (int i = 0; i < selected; ++i) {
        int showed = getRandomNum(total);
        selectedPerson.push_back(person.at(showed));
    }
    
    ui->textEdit_2->clear();
    for (int i = 0; i < selectedPerson.size(); ++i) {
        ui->textEdit_2->append(QString::number(selectedPerson.at(i).id));
    }
    
}

int MainWindow::getRandomNum(int total) {
    srand((unsigned) time(nullptr));
    return (rand() % total);
}