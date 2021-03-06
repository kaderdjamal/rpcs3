#include <stdafx.h>
#include <Utilities/SMutex.h>

__forceinline void SM_Sleep()
{
	Sleep(1);
}

__forceinline std::thread::id SM_GetCurrentThreadId()
{
	return std::this_thread::get_id();
}

__forceinline u32 SM_GetCurrentCPUThreadId()
{
	if (CPUThread* t = GetCurrentCPUThread())
	{
		return t->GetId();
	}
	return 0;
}

__forceinline be_t<u32> SM_GetCurrentCPUThreadIdBE()
{
	return SM_GetCurrentCPUThreadId();
}
