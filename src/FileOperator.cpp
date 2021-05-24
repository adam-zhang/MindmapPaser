/********************************************************************************
> FileName:	FileOperator.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 10:46:52 2021
********************************************************************************/

#include "FileOperator.h"
#include <fstream>
#include <sstream>

FileOperator::FileOperator()
{
}

FileOperator::~FileOperator()
{
}

std::vector<std::string> FileOperator::open(const std::string& fileName)
{
	std::vector<std::string> v;
	std::ifstream file(fileName);
	if (file.bad())
		return v;
	std::string line;
	while(getline(file, line))
		v.emplace_back(line);
	return v;
}

bool FileOperator::save(const std::string& fileName, const std::string& content)
{
	std::ofstream file(fileName);
	if (!file.bad())
		return false;
	file << content;
	return true;
}
