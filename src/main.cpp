#include <Arduino.h>
#include "guitarButton.h"
#include "gamePadTypes.h"

void UpdateButtons();

Joystick_ Joystick;

int buttonOnePin = 1;
int buttonTwoPin = 2;
int buttonThreePin = 3;
int buttonFourPin = 4;
int buttonFivePin = 5;
int buttonSixPin = 6;
int buttonSevenPin = 7;
int buttonEightPin = 8;
int buttonNinePin = 9;

GuitarButton guitarButtonOne = GuitarButton(buttonOnePin, GamepadButton::GamepadButtonOne, DEBOUNCE_INTERVAL_MS);
GuitarButton guitarButtonTwo = GuitarButton(buttonTwoPin, GamepadButton::GamepadButtonTwo, DEBOUNCE_INTERVAL_MS);
GuitarButton guitarButtonThree = GuitarButton(buttonThreePin, GamepadButton::GamepadButtonThree, DEBOUNCE_INTERVAL_MS);
GuitarButton guitarButtonFour = GuitarButton(buttonFourPin, GamepadButton::GamepadButtonFour, DEBOUNCE_INTERVAL_MS);
GuitarButton guitarButtonFive = GuitarButton(buttonFivePin, GamepadButton::GamepadButtonFive, DEBOUNCE_INTERVAL_MS);
GuitarButton guitarButtonSix = GuitarButton(buttonSixPin, GamepadButton::GamepadButtonSix, DEBOUNCE_INTERVAL_MS);
GuitarButton guitarButtonSeven = GuitarButton(buttonSevenPin, GamepadButton::GamepadButtonSeven, DEBOUNCE_INTERVAL_MS);
GuitarButton guitarButtonEight = GuitarButton(buttonEightPin, GamepadButton::GamepadButtonEight, DEBOUNCE_INTERVAL_MS);
GuitarButton guitarButtonNine = GuitarButton(buttonNinePin, GamepadButton::GamepadButtonNine, DEBOUNCE_INTERVAL_MS);

void setup()
{
  Joystick.begin();
  //Serial.begin(9600);
}

void loop()
{
  UpdateButtons();
}

void UpdateButtons()
{
  guitarButtonOne.Update();
  guitarButtonTwo.Update();
  guitarButtonThree.Update();
  guitarButtonFour.Update();
  guitarButtonFive.Update();
  guitarButtonSix.Update();
  guitarButtonSeven.Update();
  guitarButtonEight.Update();
  guitarButtonNine.Update();
}
