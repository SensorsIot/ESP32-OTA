# ESP32 OTA

[![MIT License](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![GitHub stars](https://img.shields.io/github/stars/SensorsIot/ESP32-OTA)](https://github.com/SensorsIot/ESP32-OTA/stargazers)
[![YouTube](https://img.shields.io/badge/YouTube-Video-red?logo=youtube)](https://www.youtube.com/watch?v=1pwqS_NUG7Q)

![ESP32](https://img.shields.io/badge/ESP32-Supported-green?logo=espressif)
![Arduino](https://img.shields.io/badge/Arduino-Compatible-00979D?logo=arduino)
![OTA](https://img.shields.io/badge/OTA-Over--The--Air-blue)

Over-The-Air (OTA) update template for ESP32.

📺 **Video Tutorial:** https://www.youtube.com/watch?v=1pwqS_NUG7Q

## ⚠️ Important

The `setupOTA()` function **replaces** `WiFi.begin()` - do not call both! The `setupOTA()` function handles WiFi connection internally.

```cpp
// ❌ Wrong - don't do this
WiFi.begin(ssid, password);
setupOTA("DeviceName", ssid, password);

// ✅ Correct - setupOTA handles WiFi
setupOTA("DeviceName", ssid, password);
```

## ⚙️ Configuration

### 📶 WiFi Credentials

Create a `credentials.h` file in the sketch folder:

```cpp
#pragma once
const char* mySSID = "your-wifi-name";
const char* myPASSWORD = "your-wifi-password";
```

Or comment out `#include <credentials.h>` and define credentials directly in the sketch.

## 📁 Examples

| Folder | Description |
|--------|-------------|
| `0TA_Template_Sketch/` | Basic OTA template |
| `0TA_Template_Sketch_TelnetStream/` | OTA with Telnet debugging |
