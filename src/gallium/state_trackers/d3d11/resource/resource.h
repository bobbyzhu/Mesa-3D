
#ifndef _D3D11_RESOURCE_H_
#define _D3D11_RESOURCE_H_

#include "devicechild.h"

struct D3D11Resource
{
    struct D3D11DeviceChild base;

    struct pipe_resource *resource;
    UINT lod;
    UINT eviction_priority;
};
static INLINE struct D3D11Resource *D3D11Resource(void *ptr)
{
    return (struct D3D11Resource *)ptr;
}

HRESULT
D3D11Resource_ctor( struct D3D11Resource *This );
void
D3D11Resource_dtor( struct D3D11Resource *This );

void WINAPI
D3D11Resource_SetEvictionPriority( struct D3D11Resource *This,
                                   UINT EvictionPriority );

UINT WINAPI
D3D11Resource_GetEvictionPriority( struct D3D11Resource *This );

#endif /* _D3D11_RESOURCE_H_ */
