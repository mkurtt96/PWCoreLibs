// copyright Iompa


#include "LogConfig.h"

ULogConfig* ULogConfig::GetLogConfig()
{
	return GetMutableDefault<ULogConfig>();
}
