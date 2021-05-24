/********************************************************************************
> FileName:	AboutDialog.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 09:40:25 2021
********************************************************************************/

#include "AboutDialog.h"
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>

AboutDialog::AboutDialog(QWidget* parent)
	: QDialog(parent)
{
	initialize();
}


AboutDialog::~AboutDialog()
{

}

void AboutDialog::initialize()
{
	auto layout = new QHBoxLayout(this);
	layout->addWidget(makeButtons());
}

QWidget* AboutDialog::makeButtons()
{
	auto button = new QPushButton("Ok");
	connect(button, &QPushButton::clicked, this, &AboutDialog::onOk);
	return button;
}

void AboutDialog::onOk()
{
	accept();
}
