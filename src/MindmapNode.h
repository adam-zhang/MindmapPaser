/********************************************************************************
> FileName:	MindmapNode.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 10:41:17 2021
********************************************************************************/
#ifndef __MINDMAPNODE__H
#define __MINDMAPNODE__H

#include "Properties.h"

#include <string>
#include <vector>
#include <memory>

class MindmapNode
{
public:
	MindmapNode(std::shared_ptr<MindmapNode>& parent  );
	~MindmapNode();
public:
	PROPERTY(std::string, text, setText);
private:
	std::vector<std::shared_ptr<MindmapNode>> left_;
	std::vector<std::shared_ptr<MindmapNode>> right_;
	std::shared_ptr<MindmapNode> parent_;
};
#endif//__MINDMAPNODE__H
