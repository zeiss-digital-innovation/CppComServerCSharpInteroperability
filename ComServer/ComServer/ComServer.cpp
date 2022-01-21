// ComServer.cpp : Implementation of WinMain


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "ComServer_i.h"


using namespace ATL;


class CComServerModule : public ATL::CAtlExeModuleT< CComServerModule >
{
public :
	DECLARE_LIBID(LIBID_ComServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COMSERVER, "{76cc513f-0052-40cc-a29c-7b1e27062879}")
};

CComServerModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

