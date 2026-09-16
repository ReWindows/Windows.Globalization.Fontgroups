#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.Fontgroups.dll by Windissect. 6 member(s).
namespace ATL {
class CAtlModule {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAtlModule@ATL@@QEAA@XZ
    CAtlModule();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGITPtr@CAtlModule@ATL@@UEAAJPEAPEAUIGlobalInterfaceTable@@@Z
    virtual long GetGITPtr(IGlobalInterfaceTable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLockCount@CAtlModule@ATL@@UEAAJXZ
    virtual long GetLockCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CAtlModule@ATL@@UEAAJXZ
    virtual long Lock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CAtlModule@ATL@@UEAAJXZ
    virtual long Unlock();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAtlModule@ATL@@UEAA@XZ
    virtual ~CAtlModule();
};
} // namespace ATL
