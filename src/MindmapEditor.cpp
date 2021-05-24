/********************************************************************************
> FileName:	MindmapEditor.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 10:35:39 2021
********************************************************************************/

#include "MindmapEditor.h"
#include "Model.h"

MindmapEditor::MindmapEditor(QWidget* parent)
	: QTextEdit(parent)
{
}

MindmapEditor::~MindmapEditor()
{
}

void MindmapEditor::update()
{
	setText(Model::instance().text());
}
