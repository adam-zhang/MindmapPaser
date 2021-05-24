#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

class CentralWidget;

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	MainWindow(QWidget* parent = 0);
	~MainWindow();
private:
	void initialize();
	void addMenus();
	void addCentralWidget();
	void makeFileMenu();
	void makeEditMenu();
	void makeHelpMenu();
private slots:
	void onExit();
	void onAbout();
	void onOpenFile();
	void onNewFile();
private:
	CentralWidget* centralWidget_ = nullptr;
};

#endif//__MAINWINDOW__H
