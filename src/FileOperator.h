/********************************************************************************
> FileName:	FileOperator.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 10:46:52 2021
********************************************************************************/
#ifndef __FILEOPERATOR__H
#define __FILEOPERATOR__H

#include <string>
#include <vector>

class FileOperator
{
public:
	FileOperator();
	~FileOperator();
public:
	std::vector<std::string> open(const std::string& fileName);
	bool save(const std::string& fileName, const std::string& content);
};
#endif//__FILEOPERATOR__H
