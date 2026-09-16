#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.Fontgroups.dll by Windissect. 19 member(s).
namespace Windows::Globalization::Fonts {
class LanguageFontServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LanguageFontServer@Fonts@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@LanguageFontServer@Fonts@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@LanguageFontServer@Fonts@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@LanguageFontServer@Fonts@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LanguageFontServer@Fonts@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LanguageFontServer@Fonts@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontFamily@LanguageFontServer@Fonts@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FontFamily(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontStretch@LanguageFontServer@Fonts@Globalization@Windows@@UEAAJPEAW4FontStretch@Text@UI@4@@Z
    virtual long get_FontStretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontStyle@LanguageFontServer@Fonts@Globalization@Windows@@UEAAJPEAW4FontStyle@Text@UI@4@@Z
    virtual long get_FontStyle(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontWeight@LanguageFontServer@Fonts@Globalization@Windows@@UEAAJPEAUFontWeight@Text@UI@4@@Z
    virtual long get_FontWeight(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleFactor@LanguageFontServer@Fonts@Globalization@Windows@@UEAAJPEAN@Z
    virtual long get_ScaleFactor(double *);
};
} // namespace Windows::Globalization::Fonts
