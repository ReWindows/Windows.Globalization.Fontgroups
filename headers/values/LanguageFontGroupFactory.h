#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Globalization.Fontgroups.dll by Windissect. 3 member(s).
namespace Windows::Globalization::Fonts {
class LanguageFontGroupFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLanguageFontGroup@LanguageFontGroupFactory@Fonts@Globalization@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUILanguageFontGroup@234@@Z
    virtual long CreateLanguageFontGroup(HSTRING__*, ::Windows::Globalization::Fonts::ILanguageFontGroup * *);
};
} // namespace Windows::Globalization::Fonts
