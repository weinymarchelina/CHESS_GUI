#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>
#include "resultwindow.h"
#include "gamewindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MenuWindow; }
QT_END_NAMESPACE

class MenuWindow : public QMainWindow
{
    Q_OBJECT

public:
    MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();

private slots:
    void on_startGameButton_clicked();
    void moveToMenu();
    void moveToResult();

    void on_actionNext_Songs_triggered();

    void on_actionPrevious_Music_triggered();

private:
    Ui::MenuWindow *ui;
    GameWindow _GameWindowPage;
    ResultWindow _ResultWindowPage;

};
#endif // MENUWINDOW_H
