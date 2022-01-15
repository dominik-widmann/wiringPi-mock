# WiringPi-mock 

![CI](https://github.com/iwishiwasaneagle/wiringPi-mock/workflows/CI/badge.svg) 
![Docs](https://github.com/iwishiwasaneagle/wiringPi-mock/workflows/Docs/badge.svg)

 > Continuation of [iwishiwasaneagle/wiringPi-mock](https://github.com/iwishiwasaneagle/wiringPi-mock) with added i2c functionalities. 

WiringPi is an excellent library for accessing GPIO and other hardware on the
Raspberry Pi, written by Gordon Henderson (http://wiringpi.com). When using it
I often would like to compile and test my program on my desktop ubuntu system, 
before finally porting it to the Pi. Sadly wiringPi doesn't run on non-rpi PCs. 

## Installation

```bash
git clone https://github.com/iwishiwasaneagle/wiringPi-mock
cd wiringPi-mock
sudo ./install.sh
```

To uninstall `cd` into `_build` and run `sudo make uninstall`.

## Usage

The sole purpose of this library is to simulate wiringPi. As such, just use it like wiringPi. For examples on how to use, visit the [examples](./examples) folder.

## Documentation

Visit https://iwishiwasaneagle.github.io/wiringPi-mock/ or build from source:
```bash
doxygen
firefox docs/index.html
``` 
