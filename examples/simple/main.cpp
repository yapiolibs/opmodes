#include <OperatingMode.h>

OperatingMode operating_mode;

void processNormalMode() { }
void processSwitchToWifi() { }
void processWifi() { }

void setup() {}

void loop()
{
    if (operating_mode == OperatingMode::Mode::Normal)
        processNormalMode();
    else if (operating_mode == OperatingMode::Mode::SwitchToWifi)
        processSwitchToWifi();
    else if (operating_mode == OperatingMode::Mode::Wifi)
        processWifi();
}
