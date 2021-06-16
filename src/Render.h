/********************************************************************************
> FileName:	Render.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 14:01:40 2021
********************************************************************************/
#ifndef __RENDER__H
#define __RENDER__H

#include <QString>

class Render
{
public:
	Render();
	~Render();
public:
	void setText(const QString& text);
private:
	QString text_;
};
#endif//__RENDER__H
