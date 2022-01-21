// ComServerMgr.cpp : Implementation of CComServerMgr

#include "pch.h"
#include "ComServerMgr.h"


STDMETHODIMP CComServerMgr::AddOne(int value, int* result)
{
	int res = value + 1;
	if (result != nullptr)
	{
		*result = res;
		return S_OK;
	}

	return S_OK;
}

