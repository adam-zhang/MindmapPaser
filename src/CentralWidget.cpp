/********************************************************************************
> FileName:	CentralWidget.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 09:55:52 2021
********************************************************************************/

#include "CentralWidget.h"
#include "Previewer.h"
#include <QSplitter.h>
#include <QHBoxLayout>
#include <QTextEdit>

CentralWidget::CentralWidget(QWidget* parent)
	: QWidget(parent)
{
	initialize();
}

CentralWidget::~CentralWidget()
{
}

void CentralWidget::initialize()
{
	auto layout = new QHBoxLayout(this);
	layout->addWidget(makeSplitter());
}

QWidget* CentralWidget::makeSplitter()
{
	auto splitter = new QSplitter;
	splitter->addWidget(makeEditor());
	splitter->addWidget(makePreviewer());
	splitter->setStretchFactor(0, 1);
	splitter->setStretchFactor(1, 1);
	return splitter;
}

QWidget* CentralWidget::makeEditor()
{
	auto edit = new QTextEdit;
	return edit;
}

QWidget* CentralWidget::makePreviewer()
{
	auto previewer = new Previewer;
	return previewer;
}
