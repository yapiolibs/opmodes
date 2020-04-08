#include "OperatingMode.h"

// -------------------------------------------------------------------------------------------------

OperatingMode::OperatingMode(Mode mode) : mode(mode) {}

// -------------------------------------------------------------------------------------------------

uint8_t OperatingMode::uint8FromMode(const Mode mode)
{
    return static_cast<std::underlying_type<Mode>::type>(mode);
}

// -------------------------------------------------------------------------------------------------

OperatingMode::Mode OperatingMode::modeFromUint8(const uint8_t mode)
{
    return static_cast<Mode>(mode);
}

// -------------------------------------------------------------------------------------------------

void OperatingMode::setMode(Mode new_mode) { this->operator=(new_mode); }

// -------------------------------------------------------------------------------------------------

OperatingMode::Mode OperatingMode::getMode() const { return mode; }

// -------------------------------------------------------------------------------------------------

OperatingMode &OperatingMode::operator=(const Mode &new_mode)
{
    auto current = std::underlying_type<Mode>::type(mode);
    auto next = std::underlying_type<Mode>::type(new_mode);
    this->mode = new_mode;
    return *this;
}

// -------------------------------------------------------------------------------------------------

bool OperatingMode::operator==(Mode other_mode) const { return this->mode == other_mode; }

// -------------------------------------------------------------------------------------------------

bool OperatingMode::operator!=(Mode other_mode) const { return !(*this == other_mode); };
