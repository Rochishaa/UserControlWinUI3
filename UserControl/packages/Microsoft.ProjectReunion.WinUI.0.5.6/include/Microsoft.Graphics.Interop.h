
//---------------------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
//---------------------------------------------------------------------------

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef __Microsoft_GRAPHICS_INTEROP_H
#define __Microsoft_GRAPHICS_INTEROP_H

#include <Microsoft.graphics.h>
#include <sdkddkver.h>

// Forward declarations
interface ID2D1Geometry;
interface ID2D1Factory;

#if defined(____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__) || defined(MIDL_NS_PREFIX)
namespace ABI {
#endif
namespace Microsoft {
namespace Graphics {

//------------------------------------------------------------------------------
//
// interface IGeometrySource2DInterop
//
//------------------------------------------------------------------------------

#undef INTERFACE
#define INTERFACE IGeometrySource2DInterop
DECLARE_INTERFACE_IID_(IGeometrySource2DInterop, IUnknown, "6D4FAA64-C9FD-4B3C-B22B-646E9FAEDE42")
{
    IFACEMETHOD(GetGeometry)(
        _COM_Outptr_ ID2D1Geometry** value
        ) PURE;

    IFACEMETHOD(TryGetGeometryUsingFactory)(
        _In_ ID2D1Factory* factory,
        _COM_Outptr_result_maybenull_ ID2D1Geometry** value
        ) PURE;
};


} // namespace Graphics
} // namespace Windows
#if defined(____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__) || defined(MIDL_NS_PREFIX)
} // namespace ABI 
#endif

#endif // __Microsoft_GRAPHICS_INTEROP_H
