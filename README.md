# CloneHeroUsbController

Clone Hero is a fan-made version of the rhythm game Guitar Hero. It is played with a guitar-shaped gamepad. 

With official guitar controllers no longer being produced, I decided to seek a DIY solution.

The parts are 3D printed with models from https://www.printables.com/model/227781-poly-clone-hero-controller.

The controller is powered by an Arduino Pro Micro clone board which acts as a USB Human Interface Device (HID).

HIDs follow a standardised protocol which is recognised by many different operating systems.

## Things I learned/developed from this project

- Soldering and wiring.
- USB HID protocol basics (Lots of this was abstracted away by the Joystick library)
- GPIO setup/configuration.
- 3D printing and assembly.
- Writing, building and flashing code with the PlatformIO IDE (VS Code extension)

## Challenges/solutions/considerations

- The switches for the fret buttons were chosen based on their low actuation force, which makes for quicker tapping/playing compared to an official production controller.
- The switches for the strum bar were chosen based on their 'clicky' feel and sound, which helps to keep rhythm when playing.
- I no longer need to rely on old out-of-production hardware which is becoming increasingly more expensive and less available.
- The controller communicates over USB serial, removing the need for any specific dongles (with the official controllers you need the correct dongle for the console your controller was made for)
- The latency is also lower when compared to official hardware.
- The official guitars have an Analog whammy bar, this controller does not but it could be added using a potentiometer or other analog component.
- In future, I'd consider designing a PCB for the main board and the fretboard in the neck of the guitar.

## Images 

![Completed build](https://github.com/Bailym/CloneHeroUSBController/blob/main/images/1.jpg)

![Guitar neck](https://github.com/Bailym/CloneHeroUSBController/blob/main/images/2.jpg)

![Guitar body](https://github.com/Bailym/CloneHeroUSBController/blob/main/images/3.jpg)

![Internal wiring and board](https://github.com/Bailym/CloneHeroUSBController/blob/main/images/4.jpg)

![Body wiring](https://github.com/Bailym/CloneHeroUSBController/blob/main/images/5.jpg)

![Neck wiring](https://github.com/Bailym/CloneHeroUSBController/blob/main/images/6.jpg)

![Neck complete](https://github.com/Bailym/CloneHeroUSBController/blob/main/images/7.jpg)



