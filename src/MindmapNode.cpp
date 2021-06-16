/********************************************************************************
> FileName:	MindmapNode.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 10:41:17 2021
********************************************************************************/

#include "MindmapNode.h"

MindmapNode::MindmapNode(std::shared_ptr<MindmapNode>& parent)
	: parent_( parent)
{
}

MindmapNode::~MindmapNode()
{
}
