/********************************************************************************
> FileName:	MindmapEditor.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 10:35:39 2021
********************************************************************************/
#ifndef __MINDMAPEDITOR__H
#define __MINDMAPEDITOR__H

#include <QTextEdit>
#include "Viewer.h"

class MindmapEditor : public QTextEdit, public Viewer
{
	Q_OBJECT
public:
	MindmapEditor(QWidget* parent = nullptr);
	~MindmapEditor();
private:
public:
	void update()override;

};
#endif//__MINDMAPEDITOR__H
