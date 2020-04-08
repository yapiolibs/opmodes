#pragma once

#include <type_traits>
#include <inttypes.h>

struct OperatingMode
{
    enum class Mode : uint8_t
    {
        SwitchToNormal,
        Normal,

        SwitchToWifi,
        Wifi,

        SwitchToWifiOnly,
        WifiOnly,

        SwitchToSleep,
        Sleep,

        SwitchToDeepSleep,
        DeepSleep,
    };

    OperatingMode(Mode mode);

    static uint8_t uint8FromMode(const Mode mode);

    static Mode modeFromUint8(const uint8_t mode);

    void setMode(Mode new_mode);

    Mode getMode() const;

    OperatingMode &operator=(const Mode &new_mode);

    bool operator==(Mode other_mode) const;

    bool operator!=(Mode other_mode) const;

protected:
    Mode mode{Mode::Normal};
};
