#include "guitarButton.h"
#include "gamepadTypes.h"

GuitarButton::GuitarButton(int inputPin, GamepadButton gamepadButton, int debounceInterval)
{
    this->inputPin = inputPin;
    this->gamepadButton = gamepadButton;
    this->debounceInterval = debounceInterval;

    this->bounceInstance = Bounce();
    this->bounceInstance.attach(inputPin, INPUT_PULLUP);
    this->bounceInstance.interval(debounceInterval);
}

void GuitarButton::Update()
{
    this->bounceInstance.update();

    if (IsPressed())
    {
        //Serial.println("Button" + String((int)gamepadButton+1) + " pressed");
        Joystick.setButton((int)gamepadButton, (int)GamepadButtonState::GamepadButtonStatePressed);
    }
    if (IsReleased())
    {
        //Serial.println("Button" + String((int)gamepadButton+1) + " released");
        Joystick.setButton((int)gamepadButton, (int)GamepadButtonState::GamepadButtonStateReleased);
    }
}

bool GuitarButton::IsPressed()
{
    return this->bounceInstance.fell();
}

bool GuitarButton::IsReleased()
{
    return this->bounceInstance.rose();
}
