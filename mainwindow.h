//
// Created by 裴奕霖 on 2022/5/27.
//

#pragma once

#include <QWidget>
#include <QKeyEvent>
#include "Student.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    
    ~MainWindow() override;


private slots:
    
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void myslot();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    int getRandomNum(int total);

protected:
    bool eventFilter(QObject *target, QEvent *event)override;//事件过滤器
    
    int checkIfConflict(std::vector<Student>&person);
};

