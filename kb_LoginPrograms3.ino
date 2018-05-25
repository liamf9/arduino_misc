#include "DigiKeyboard.h"

const char USER[] = "Username";
const char PASS[] = "Password";
const int ARRAY_SIZE = 7;
const String apps[ARRAY_SIZE] = {"mspaint.exe","notepad.exe","wordpad.exe","winword /w","powerpnt /n","excel /e","msaccess"};
const int delay_Time = 40 ; // time to delty waiting for windows booting 

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);					
  DigiKeyboard.print(USER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43); 		// 43 is the TAB key which moves from the username to password entry.
  DigiKeyboard.print(PASS);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  delay(1000*delay_Time);
  
  for(int i = 0; i < ARRAY_SIZE; i++)
  {
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    delay(2000);
    DigiKeyboard.println(apps[i]);
    delay(3000);
  }
}


void loop() {}
