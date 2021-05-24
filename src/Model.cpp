/********************************************************************************
> FileName:	Model.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 13:02:33 2021
********************************************************************************/

#include "Model.h"
#include "Viewer.h"

Model::Model()
{
}

Model::~Model()
{
}

void Model::update(Viewer* viewer)
{
	for(auto view : viewers_)
		if (view != viewer)
			view->update();
}

void Model::setText(const QString& text)
{
	text_ = text;
	update(nullptr);
}

