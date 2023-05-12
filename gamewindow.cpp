#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QBrush>
#include <QPen>
#include <QDebug>

GameWindow::GameWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);

    isPieceSelected = false;
    selectedButton = nullptr;

    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            QString btnName = "box_" + QString::number(count);
            squareButtons[i][j] = GameWindow::findChild<QPushButton *>(btnName);

            if ((i+j) % 2 == 0) {
                squareButtons[i][j]->setStyleSheet("padding: 30px 10px; background: #F2DBCC;");
                originalColors[squareButtons[i][j]] = "#F2DBCC";
            }
            else {
                squareButtons[i][j]->setStyleSheet("padding: 30px 10px; background: #211A4E;");
                originalColors[squareButtons[i][j]] = "#211A4E";
            }

            connect(squareButtons[i][j], SIGNAL(clicked()), this, SLOT(squareSelected()));

            count++;
        }
    }
}

void GameWindow::squareSelected(){
    QPushButton *button = qobject_cast<QPushButton *>(sender());

    if (!isPieceSelected)
    {
        isPieceSelected = true;
        selectedButton = button;
        button->setStyleSheet("padding: 30px 10px; background: gold;");
        return;
    }
    else if (button != selectedButton)
    {
        return;
    }

    if (isPieceSelected)
    {
        isPieceSelected = false;
        selectedButton = nullptr;

        QString originalColor = originalColors[button];
        button->setStyleSheet("padding: 30px 10px; background: " + originalColor + ";");
    }
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::on_resignButton_clicked()
{
    emit ShowResultClicked();
}

