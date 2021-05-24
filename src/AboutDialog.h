/********************************************************************************
> FileName:	AboutDialog.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 09:40:25 2021
********************************************************************************/
#ifndef __ABOUTDIALOG__H
#define __ABOUTDIALOG__H

#include <QDialog>

class AboutDialog : public QDialog
{
	Q_OBJECT
public:
	AboutDialog(QWidget* parent = nullptr);
	~AboutDialog();
private:
	void initialize();
	QWidget* makeButtons();
private slots:
	void onOk();
};
#endif//__ABOUTDIALOG__H
