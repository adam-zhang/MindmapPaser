/********************************************************************************
> FileName:	MindmapNode.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 10:41:17 2021
********************************************************************************/

#include "MindmapNode.h"

MindmapNode::MindmapNode(MindmapNode* parent)
{
	parent->nodes_.push_back(this);
	parent_ = parent;
}

MindmapNode::~MindmapNode()
{
	for(auto node : nodes_)
		delete node;
}
