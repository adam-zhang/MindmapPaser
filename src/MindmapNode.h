/********************************************************************************
> FileName:	MindmapNode.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 10:41:17 2021
********************************************************************************/
#ifndef __MINDMAPNODE__H
#define __MINDMAPNODE__H

#include "Properties.h"

#include <QString>
#include <QVector>

class MindmapNode
{
public:
	MindmapNode(MindmapNode* parent = nullptr);
	~MindmapNode();
public:
	PROPERTY(QString, text, setText);
private:
	QVector<MindmapNode*> nodes_;
	MindmapNode* parent_ = nullptr;
};
#endif//__MINDMAPNODE__H
