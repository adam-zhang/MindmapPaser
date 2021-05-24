/********************************************************************************
> FileName:	FileOperator.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 10:46:52 2021
********************************************************************************/
#ifndef __FILEOPERATOR__H
#define __FILEOPERATOR__H

#include <QString>

class FileOperator
{
private:
	FileOperator();
	~FileOperator();
public:
	static QString open(const QString& fileName);
	static bool save(const QString& fileName, const QString& content);
};
#endif//__FILEOPERATOR__H
