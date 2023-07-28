#include "DigiKeyboard.h"

int led = 0;  // Change to pin 1 for MODEL A
int on_wait = 1000;  // How long to toggle CAPS LOCK for.
int off_wait = 5000;  // Delay between toggles.

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("https://fakeupdate.net/win11/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  
  pinMode(led, OUTPUT);
  DigiKeyboard.update();
}

void loop() {
  DigiKeyboard.sendKeyStroke(57);
  digitalWrite(led, 1);
  delay(on_wait);
  DigiKeyboard.sendKeyStroke(57);
  digitalWrite(led, 0);
  delay(off_wait);
}