#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H
#include <QWidget>
#include <piece.h>
#include <QPushButton>
#include <QMap>

namespace Ui {
class GameWindow;
}

class GameWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

signals:
    void ShowResultClicked();

private slots:
    void on_resignButton_clicked();
    void squareSelected();

private:
    Ui::GameWindow *ui;
    QPushButton *squareButtons[8][8];
    QMap<QPushButton *, QString> originalColors;
    QPushButton *selectedButton;
    bool isPieceSelected;
};

#endif // GAMEWINDOW_H
