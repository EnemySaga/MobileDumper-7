#pragma once

#include "../../IProfile.h"

class OdinValhallaProfile : public IProfile
{
public:
    OdinValhallaProfile() = default;

    std::vector<std::string> GetSupportedGames() const override
    {
        return {"com.kakaogames.gbod"};
    }

    uintptr_t GetGObjects() const override
    {
        return GMemory->FindUnrealSymbol("GUObjectArray");
    }

    uintptr_t GetGNames() const override
    {
        return IProfile::GetGNames();
    }
};
