# 🔐 BADUSB with Digispark ATTiny85

The **Digispark ATTiny85** is a compact microcontroller development board with a built-in USB interface. It can be programmed using the Arduino IDE, allowing you to create powerful USB-based automation tools.

One popular application is building a **BADUSB device**, similar to the **Hak5 USB Rubber Ducky**, which emulates a keyboard and executes predefined keystroke payloads on a target system.

---

## ✨ Features

- 🔌 USB HID (Keyboard Emulation)  
- ⚡ Fast Payload Execution  
- 💻 Arduino IDE Support  
- 🧩 Ultra Small & Portable  
- 🔐 Ideal for Security Research & Learning  

---

## 📦 Requirements

### 🧰 Hardware

- **Digispark ATTiny85**  
  🔗 https://amzn.to/44VpkMJ  

### 💻 Software & Tools

- **Arduino IDE**  
  🔗 https://www.arduino.cc/en/software  

- **Digistump Board Manager URL**
  ```
  http://digistump.com/package_digistump_index.json
  ```

- **Digistump Drivers (Windows)**  
  🔗 https://github.com/digistump/DigistumpArduino/releases/download/1.6.7/Digistump.Drivers.zip  

---

## ⚙️ Installation Guide

1. Install the Arduino IDE from the official website  
2. Open **Arduino IDE → File → Preferences**  
3. Add this URL in **Additional Board Manager URLs**:
   ```
   http://digistump.com/package_digistump_index.json
   ```
4. Go to **Tools → Board → Boards Manager**  
5. Search for **Digistump AVR Boards** and install it  
6. *(Windows only)* Install the drivers as Administrator  
7. Select board: **Digispark (Default - 16.5MHz)**  
8. Click **Upload**, then plug in the Digispark when prompted  

---

## 🚀 Getting Started (Example)

```cpp
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.print("Hello from Digispark BADUSB!");
}

void loop() {}
```
Check **Digispark Scripts** Folder in the repository for some of my scripts.

---

## 🎯 Use Cases

- 🔐 Ethical Hacking Practice  
- 🧪 Security Research  
- ⚙️ Task Automation  
- 🎓 Educational Demonstrations  

---

## 🎥 Video Tutorials

### ▶️ Making Digispark BADUSB
[![Making Digispark BADUSB](https://img.youtube.com/vi/uUcmAPKvQ4Q/maxresdefault.jpg)](https://youtu.be/uUcmAPKvQ4Q)

### ▶️ WiFi Hacking With BADUSB
[![WiFi Hacking With BADUSB](https://img.youtube.com/vi/cLWqbGjDmPk/maxresdefault.jpg)](https://youtu.be/cLWqbGjDmPk)

### ▶️ Phone PIN Code Hacking With BADUSB
[![Phone PIN Code Hacking](https://img.youtube.com/vi/Pg1Yz_OMb08/maxresdefault.jpg)](https://youtu.be/Pg1Yz_OMb08)

---

## ⚠️ Disclaimer

> This project is intended **strictly for educational purposes only**.

- Do **NOT** use this on systems you do not own or have explicit permission to test  
- Unauthorized access is illegal and punishable by law  
- The author is **not responsible** for any misuse or damage caused  

---

## 📜 License

This project is released for educational use.  
Feel free to modify and learn from it — but use responsibly.

---

## ⭐ Support

If you find this project useful:

- ⭐ Star the repository  
- 📢 Share it with others  
- 🎥 Subscribe to the YouTube channel  

---

<p align="center">
  Made with ❤️ by <b>Mehedi Shakeel</b>
</p>
