#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QVideoWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();

public slots:
	void on_streamStop_clicked();
	void on_streamPause_clicked();
	void on_streamPlay_clicked();
private:
	Ui::MainWindow *ui;
	QMediaPlayer mPlayer;
	QVideoWidget videoWidget;
};
#endif // MAINWINDOW_H
