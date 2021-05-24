/********************************************************************************
> FileName:	Viewer.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 11:48:06 2021
********************************************************************************/
#ifndef __VIEWER__H
#define __VIEWER__H


class Viewer
{
public:
	Viewer();
	~Viewer();
public:
	virtual void update() = 0;
};
#endif//__VIEWER__H
