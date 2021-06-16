/********************************************************************************
> FileName:	Previewer.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 10:13:22 2021
********************************************************************************/

#include "Previewer.h"
#include "Model.h"
#include <thread>

Previewer::Previewer(QWidget* parent)
	: QWidget(parent)
{

}

Previewer::~Previewer()
{

}

void Previewer::update()
{
	auto text = Model::instance().text();
	//thread t(&Previewer::render, this, text);
}
