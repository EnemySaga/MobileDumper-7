#pragma once

#include "../../IProfile.h"

class ArkUltimateProfile : public IProfile
{
public:
    ArkUltimateProfile() = default;

    std::vector<std::string> GetSupportedGames() const override
    {
        return {"com.studiowildcard.arkuse"};
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
