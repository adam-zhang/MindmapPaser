/********************************************************************************
> FileName:	FileOperator.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 10:46:52 2021
********************************************************************************/

#include "FileOperator.h"
#include <QFile>
#include <QTextStream>

FileOperator::FileOperator()
{
}

FileOperator::~FileOperator()
{
}

QString FileOperator::open(const QString& fileName)
{
	QString s;
	QFile file(fileName);
	if (!file.open( QIODevice::ReadOnly|QIODevice::Text))
		return s;
	QTextStream stream(&file);
	return stream.readAll();
}

bool FileOperator::save(const QString& fileName, const QString& content)
{
	QFile file(fileName);
	if (!file.open(QIODevice::WriteOnly))
		return false;
	QTextStream stream(&file);
	stream << content;
	return true;
}
