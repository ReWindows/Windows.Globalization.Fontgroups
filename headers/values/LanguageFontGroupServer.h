#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.Fontgroups.dll by Windissect. 28 member(s).
namespace Windows::Globalization::Fonts {
class LanguageFontGroupServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@LanguageFontGroupServer@Fonts@Globalization@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@LanguageFontGroupServer@Fonts@Globalization@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DocumentAlternate1Font@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJPEAPEAUILanguageFont@234@@Z
    virtual long get_DocumentAlternate1Font(::Windows::Globalization::Fonts::ILanguageFont * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DocumentAlternate2Font@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJPEAPEAUILanguageFont@234@@Z
    virtual long get_DocumentAlternate2Font(::Windows::Globalization::Fonts::ILanguageFont * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DocumentHeadingFont@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJPEAPEAUILanguageFont@234@@Z
    virtual long get_DocumentHeadingFont(::Windows::Globalization::Fonts::ILanguageFont * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FixedWidthTextFont@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJPEAPEAUILanguageFont@234@@Z
    virtual long get_FixedWidthTextFont(::Windows::Globalization::Fonts::ILanguageFont * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ModernDocumentFont@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJPEAPEAUILanguageFont@234@@Z
    virtual long get_ModernDocumentFont(::Windows::Globalization::Fonts::ILanguageFont * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TraditionalDocumentFont@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJPEAPEAUILanguageFont@234@@Z
    virtual long get_TraditionalDocumentFont(::Windows::Globalization::Fonts::ILanguageFont * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UICaptionFont@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJPEAPEAUILanguageFont@234@@Z
    virtual long get_UICaptionFont(::Windows::Globalization::Fonts::ILanguageFont * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UIHeadingFont@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJPEAPEAUILanguageFont@234@@Z
    virtual long get_UIHeadingFont(::Windows::Globalization::Fonts::ILanguageFont * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UINotificationHeadingFont@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJPEAPEAUILanguageFont@234@@Z
    virtual long get_UINotificationHeadingFont(::Windows::Globalization::Fonts::ILanguageFont * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UITextFont@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJPEAPEAUILanguageFont@234@@Z
    virtual long get_UITextFont(::Windows::Globalization::Fonts::ILanguageFont * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UITitleFont@LanguageFontGroupServer@Fonts@Globalization@Windows@@UEAAJPEAPEAUILanguageFont@234@@Z
    virtual long get_UITitleFont(::Windows::Globalization::Fonts::ILanguageFont * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetLanguageFont@LanguageFontGroupServer@Fonts@Globalization@Windows@@AEAAJW4PREFERRED_FONT_CATEGORY@@PEAPEAUILanguageFont@234@@Z
    long TryGetLanguageFont(int, ::Windows::Globalization::Fonts::ILanguageFont * *);
};
} // namespace Windows::Globalization::Fonts
