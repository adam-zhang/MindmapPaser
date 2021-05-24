#include "MainWindow.h"
#include "AboutDialog.h"
#include "CentralWidget.h"
#include "GlobalSettings.h"
#include "FileOperator.h"
#include "Model.h"
#include <QMenuBar>
#include <QFileDialog>


MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
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
	auto action = file->addAction("&New File");
	connect(action, &QAction::triggered, this, &MainWindow::onNewFile);
	action = file->addAction("&Open File");
	connect(action, &QAction::triggered, this, &MainWindow::onOpenFile);
	action = file->addAction("E&xit");
	connect(action, &QAction::triggered, this, &MainWindow::close);
}

void MainWindow::onOpenFile()
{
	auto fileName = QFileDialog::getOpenFileName(this, GlobalSettings::instance().applicationName(), ".");
	auto text = FileOperator::open(fileName);
	Model::instance().setText(text);
	//centralWidget_->setText(v);
}

void MainWindow::onNewFile()
{
	
}

void MainWindow::onExit()
{

}

void MainWindow::makeEditMenu()
{
	menuBar()->addMenu("&Edit");
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
	centralWidget_ = new CentralWidget;
	setCentralWidget(centralWidget_);
}
