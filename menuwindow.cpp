#include "menuwindow.h"
#include "ui_menuwindow.h"
#include <QMediaPlayer>
#include <QPainterPath>

QMediaPlayer* music = new QMediaPlayer;
int musicIndex = 1;

MenuWindow::MenuWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MenuWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(1, &_GameWindowPage);
    ui->stackedWidget->insertWidget(2, &_ResultWindowPage);

    connect(&_ResultWindowPage, SIGNAL(BackToMenuClicked()), this, SLOT(moveToMenu()));
    connect(&_GameWindowPage, SIGNAL(ShowResultClicked()), this, SLOT(moveToResult()));

    /*
    QPixmap pix;

    int w = ui->mainTitleImage->width();
    int h = ui->mainTitleImage->height();
    ui->mainTitleImage->setPixmap(pix.scaled (w, h, Qt::KeepAspectRatio));
    */

    music->setMedia(QUrl("qrc:/sounds/sound/bgmusic_1.mp3"));
    music->play();

    // ui->startGameButton->setCursor(Qt::PointingHandCursor);

}

MenuWindow::~MenuWindow()
{
    delete ui;
}

void MenuWindow::on_startGameButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MenuWindow::moveToMenu()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MenuWindow::moveToResult()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MenuWindow::on_actionNext_Songs_triggered()
{
    musicIndex++;

    if (musicIndex > 3)
    {
        musicIndex = 1;
    }

    music->setMedia(QUrl("qrc:/sounds/sound/bgmusic_" + QString::number(musicIndex) + ".mp3"));
    music->play();
}


void MenuWindow::on_actionPrevious_Music_triggered()
{
    musicIndex--;

    if (musicIndex < 1)
    {
        musicIndex = 3;
    }

    music->setMedia(QUrl("qrc:/sounds/sound/bgmusic_" + QString::number(musicIndex) + ".mp3"));
    music->play();
}

