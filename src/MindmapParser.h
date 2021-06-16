/********************************************************************************
> FileName:	MindmapParser.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 10:45:24 2021
********************************************************************************/
#ifndef MINDMAPPARSER_H
#define MINDMAPPARSER_H

#include <memory>

class MindmapNode;

class MindmapParser
{
private:
	MindmapParser();
	~MindmapParser();
public:
	static std::shared_ptr<MindmapNode> parse(const std::string&);
};
#endif//MINDMAPPARSER_H
