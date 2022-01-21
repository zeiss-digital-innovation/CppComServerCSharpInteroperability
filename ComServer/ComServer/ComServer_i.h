

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ComServer.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ComServer_i_h__
#define __ComServer_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IComServerMgr_FWD_DEFINED__
#define __IComServerMgr_FWD_DEFINED__
typedef interface IComServerMgr IComServerMgr;

#endif 	/* __IComServerMgr_FWD_DEFINED__ */


#ifndef __ComServerMgr_FWD_DEFINED__
#define __ComServerMgr_FWD_DEFINED__

#ifdef __cplusplus
typedef class ComServerMgr ComServerMgr;
#else
typedef struct ComServerMgr ComServerMgr;
#endif /* __cplusplus */

#endif 	/* __ComServerMgr_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IComServerMgr_INTERFACE_DEFINED__
#define __IComServerMgr_INTERFACE_DEFINED__

/* interface IComServerMgr */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IComServerMgr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("232197e6-96d1-42a5-bc2a-174d3b1c2494")
    IComServerMgr : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddOne( 
            /* [in] */ int value,
            /* [retval][out] */ int *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IComServerMgrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComServerMgr * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComServerMgr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComServerMgr * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IComServerMgr * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IComServerMgr * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IComServerMgr * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IComServerMgr * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddOne )( 
            IComServerMgr * This,
            /* [in] */ int value,
            /* [retval][out] */ int *result);
        
        END_INTERFACE
    } IComServerMgrVtbl;

    interface IComServerMgr
    {
        CONST_VTBL struct IComServerMgrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComServerMgr_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComServerMgr_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComServerMgr_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComServerMgr_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IComServerMgr_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IComServerMgr_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IComServerMgr_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IComServerMgr_AddOne(This,value,result)	\
    ( (This)->lpVtbl -> AddOne(This,value,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComServerMgr_INTERFACE_DEFINED__ */



#ifndef __ComServerLib_LIBRARY_DEFINED__
#define __ComServerLib_LIBRARY_DEFINED__

/* library ComServerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ComServerLib;

EXTERN_C const CLSID CLSID_ComServerMgr;

#ifdef __cplusplus

class DECLSPEC_UUID("ce3d1fc7-c38b-47de-9efd-276e65b8bf1b")
ComServerMgr;
#endif
#endif /* __ComServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


