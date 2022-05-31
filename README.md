# m5stack-core2-hello-world

This is a `Hello, World!` application to test the hardware of the [M5Stack Core2](https://shop.m5stack.com/collections/m5-controllers/products/m5stack-core2-esp32-iot-development-kit).


## Setup the Arduino IDE

1. Install the [Arduino IDE](https://www.arduino.cc/en/software#download). There are step-by-step instructions for Windows, Mac, and Linux [here](https://www.arduino.cc/en/Guide#install-the-arduino-desktop-ide). Once installed, open the Arduino IDE.

2. Add support for ESP32 boards by going to `File-->Preferences-->Additional Board Manager URLs` and then paste in the URL below. If you have a URL in the box already, separate them with a comma.

```
https://dl.espressif.com/dl/package_esp32_index.json
```

3. Go to `Tools-->Board-->Boards Manager`, search for `esp32` and install.

4. Go to `Tools-->Manage Libraries`, search for `m5core2` and install (be sure to install the entry by `M5Stack`).

5. Go to `Tools-->Board` and select `M5Stack-Core2`.

6. I also had to make the following changes:
  * Change `Tools-->Upload Speed` from `921600` to `115200`
  * Change `Tools-->Port` to `/dev/ttyACM0`
  * Install the `pyserial` package on my distrubtion

## Testing the M5Stack Core2

1. Clone this repo and open the `HelloWorld.ino` file with the Arduino IDE.

```
git clone https://github.com/loganmarchione/m5stack-slack-status-updater.git
cd m5stack-slack-status-updater/HelloWorld
```

2. Click `Upload` in the IDE and wait for the program to compile and upload. Your M5Stack Core2 should do the following:

* Print `Hello, World!`
* Blink the LED on the side
* Test the display (white, black, red, green, blue)
* Test the vibration motor
* Print `Done!`

## TODO
- [ ] Do some printing to the serial console with more detailed info