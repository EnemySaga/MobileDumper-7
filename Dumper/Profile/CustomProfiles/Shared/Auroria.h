#pragma once

#include "../../IProfile.h"

class AuroriaProfile : public IProfile
{
public:
    AuroriaProfile() = default;

    std::vector<std::string> GetSupportedGames() const override
    {
        return {
            "com.herogame.gplay.outerland.auroria.survivalminecraft.mmorpg",
            "com.herogame.gplay.outerland.wandereruniverse",
            "com.xiaojiaogame.gplay.outerland.wandereruniverse"
        };
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
