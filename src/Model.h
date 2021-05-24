/********************************************************************************
> FileName:	Model.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 13:02:33 2021
********************************************************************************/
#ifndef __MODEL__H
#define __MODEL__H

#include <vector>
#include <QString>
#include "Singleton.h"

class Viewer;

class Model : public Singleton<Model>
{
public:
	Model();
	~Model();
private:
	std::vector<Viewer*> viewers_;
	QString text_;
public:
	void addViewer(Viewer* viewer)
	{ viewers_.emplace_back(viewer); }
	void update(Viewer* viewer);
	void setText(const QString& text)
	{ text_ = text; }
};
#endif//__MODEL__H
