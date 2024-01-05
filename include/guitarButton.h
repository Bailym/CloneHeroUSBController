#ifndef GUITAR_BUTTON_H
#define GUITAR_BUTTON_H

#include <Arduino.h>
#include "gamepadTypes.h"
#include <Bounce2.h>

class GuitarButton
{
    public:
        GuitarButton(int inputPin, GamepadButton gamepadButton, int debounceInterval);
        void Update();
    private:
        bool IsPressed();
        bool IsReleased();
        int inputPin;
        GamepadButton gamepadButton;
        int debounceInterval;
        Bounce bounceInstance;
};




#endif