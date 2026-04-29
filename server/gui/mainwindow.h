#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void AuthClientToTable();
private:
    Ui::MainWindow *ui;
    int LabelBoxesY = 0;

    QLabel *ipLabel;
    QString pathCopyFile;
    QLabel *pcNameLabel;
    QLabel *userNameLabel;
    QLabel *installDateLabel;
    QLabel *osLabel;
    QLabel *osLanguageLabel;
    QLabel *countryLabel;
    QLabel *camLabel;
};
#endif // MAINWINDOW_H
