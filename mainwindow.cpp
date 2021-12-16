#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_streamPlay_clicked()
{
		ui->verticalLayout->addWidget(&videoWidget);
		mPlayer.setMedia(QUrl("v4l2:///dev/video0"));
		mPlayer.setVideoOutput(&videoWidget);
		mPlayer.play();
}

void MainWindow::on_streamStop_clicked()
{
	mPlayer.stop();
}

void MainWindow::on_streamPause_clicked()
{
	mPlayer.pause();
}
