#pragma once

#include "../../IProfile.h"

class PESProfile : public IProfile
{
public:
    PESProfile() = default;

    std::vector<std::string> GetSupportedGames() const override
    {
        return {"jp.konami.pesam"};
    }

    uintptr_t GetGObjects() const override
    {
        return IProfile::GetGObjects();
    }

    uintptr_t GetGNames() const override
    {
        return IProfile::GetGNames();
    }
};
