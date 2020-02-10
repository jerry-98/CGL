#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QImage getI();
    void dda_line(float,float,float,float);

    int sign(float);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_Y1_destroyed();

    void on_label_3_linkActivated(const QString &link);

    void on_X2_destroyed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
