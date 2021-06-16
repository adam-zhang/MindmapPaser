/********************************************************************************
> FileName:	Previewer.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 10:13:22 2021
********************************************************************************/
#ifndef __PREVIEWER__H
#define __PREVIEWER__H

#include <QWidget>
#include "Viewer.h"


class Previewer : public QWidget, public Viewer
{
	Q_OBJECT 
public:
	Previewer(QWidget* = nullptr);
	~Previewer();
public:
	void update()override;
private:
	void render(const QString& text);
};
#endif//__PREVIEWER__H
