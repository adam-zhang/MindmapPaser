/********************************************************************************
> FileName:	CentralWidget.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 09:55:52 2021
********************************************************************************/
#ifndef __CENTRALWIDGET__H
#define __CENTRALWIDGET__H

#include <QWidget>

class MindmapEditor;
class MindmapPreviewer;

class CentralWidget : public QWidget
{
	Q_OBJECT
public:
	CentralWidget(QWidget* parent = nullptr);
	~CentralWidget();
private:
	void initialize();
	QWidget* makeSplitter();
	QWidget* makeEditor();
	QWidget* makePreviewer();
private:
	MindmapPreviewer* previewer_ = nullptr;
	MindmapEditor* editor_ = nullptr;
};
#endif//__CENTRALWIDGET__H
