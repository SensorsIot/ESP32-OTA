# ESP32 OTA

Material for my YouTube [video](https://www.youtube.com/watch?v=1pwqS_NUG7Q).

## Installation

In order to use the code provided in this repository you need to provide the credentials of your access point. Or you can comment out the `#include <credentials.h>` and define the ``mySSID`` and ``myPASSWORD`` to the `setupOTA("TemplateSketch", mySSID, myPASSWORD)` function.

### Provide your credentials

Create a `credentials.h` file (in the sketch folder directly or in the Arduino library folder).
For Windows, the library folder is located in the same folder as the  sketch (`[...]\Arduino\libraries\Credentials`, `[...]\Arduino`).

The text file `credentials.h` looks like:

```c++
#pragma once
const char* mySSID = "SSID of your AP";
const char* myPASSWORD = "Password of your AP";
```