#ifndef GAMEPAD_TYPES_H
#define GAMEPAD_TYPES_H

#include <Arduino.h>
#include <Joystick.h>

#define DEBOUNCE_INTERVAL_MS    5

enum class GamepadButton
{
    GamepadButtonOne = 0,
    GamepadButtonTwo = 1,
    GamepadButtonThree = 2,
    GamepadButtonFour = 3,
    GamepadButtonFive = 4,
    GamepadButtonSix = 5,
    GamepadButtonSeven = 6,
    GamepadButtonEight = 7,
    GamepadButtonNine = 8,
};

enum class GamepadButtonState
{
    GamepadButtonStatePressed = 1,
    GamepadButtonStateReleased = 0,
};

extern Joystick_ Joystick;

#endif