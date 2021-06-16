/********************************************************************************
> FileName:	Render.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 14:01:40 2021
********************************************************************************/

#include "Render.h"
#include <QTextStream>
#include <vector>
#include <QDebug>

Render::Render()
{
}

Render::~Render()
{
}

static std::vector<QString> splitLines(const QString& text )
{
	auto s = text;
	std::vector<QString> v;
	QTextStream stream(&s);
	QString line;
	while(stream.readLineInto(&line))
		v.emplace_back(line);
	return v;
}

void Render::setText(const QString& text)
{
	std::vector<QString> v = splitLines(text);
	for(auto line : v)
		qDebug() << line;
}
