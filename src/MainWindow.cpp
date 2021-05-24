#include "MainWindow.h"
#include "AboutDialog.h"
#include "CentralWidget.h"
#include <QMenuBar>


MainWindow::MainWindow(QWidget* parent)
{
	initialize();
};

MainWindow::~MainWindow()
{
}

void MainWindow::initialize()
{
	addMenus();
	addCentralWidget();
	setGeometry(100, 100, 800, 600);
}

void MainWindow::addMenus()
{
	makeFileMenu();
	makeEditMenu();
	makeHelpMenu();
}

void MainWindow::makeFileMenu()
{
	auto file = menuBar()->addMenu("&File");
	auto action = file->addAction("E&xit");
	connect(action, &QAction::triggered, this, &MainWindow::close);
}

void MainWindow::onExit()
{

}

void MainWindow::makeEditMenu()
{
	auto menu = menuBar()->addMenu("&Edit");
}

void MainWindow::makeHelpMenu()
{
	auto menu = menuBar()->addMenu("&Help");
	auto action = menu->addAction("&About");
	connect(action, &QAction::triggered, this, &MainWindow::onAbout);
}

void MainWindow::onAbout()
{
	AboutDialog dialog(this);
	dialog.exec();
}

void MainWindow::addCentralWidget()
{
	setCentralWidget(new CentralWidget);
}
