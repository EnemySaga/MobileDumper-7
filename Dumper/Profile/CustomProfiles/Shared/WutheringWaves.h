#pragma once

#include "../../IProfile.h"

class WutheringWavesProfile : public IProfile
{
public:
    WutheringWavesProfile() = default;

    std::vector<std::string> GetSupportedGames() const override
    {
        return {"com.kurogame.wutheringwaves.global"};
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
