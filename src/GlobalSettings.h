/********************************************************************************
> FileName:	GlobalSettings.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Mon May 24 11:11:35 2021
********************************************************************************/
#ifndef __GLOBALSETTINGS__H
#define __GLOBALSETTINGS__H

#include "Singleton.h"
#include <QString>

class GlobalSettings : public Singleton<GlobalSettings>
{
public:
	GlobalSettings();
	~GlobalSettings();
public:
	QString applicationName();
};
#endif//__GLOBALSETTINGS__H
