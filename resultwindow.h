#ifndef RESULTWINDOW_H
#define RESULTWINDOW_H

#include <QWidget>

namespace Ui {
class ResultWindow;
}

class ResultWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ResultWindow(QWidget *parent = nullptr);
    ~ResultWindow();

private:
    Ui::ResultWindow *ui;

signals:
    void BackToMenuClicked();

private slots:
    void on_playAgainButton_clicked();
};

#endif // RESULTWINDOW_H
