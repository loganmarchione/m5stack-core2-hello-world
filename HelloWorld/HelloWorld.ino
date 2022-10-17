#include <M5Core2.h>
/////////////////////////////////
// variables - change these if needed
/////////////////////////////////

// 2500 (dim) to 3300 (bright)
int disp_volt = 2800;

// 1 (smallest) to 7 (biggest)
int font_size = 2;

/////////////////////////////////
// program - dont touch anything below here!
/////////////////////////////////

void setup(){
  // put your setup code here, to run once:
  M5.begin();

  // use the variables set earlier
  M5.Axp.SetLcdVoltage(disp_volt);
  M5.Lcd.setTextSize(font_size);

  // In each section below: set the cursor position, clear the screen, then print text
  // Hello, World!
  M5.Lcd.setCursor(1, 1);
  M5.Lcd.clear();
  M5.Lcd.println("Hello, World!");
  delay(2000);

  // Test LED by blinking
  M5.Lcd.setCursor(1, 1);
  M5.Lcd.clear();
  M5.Lcd.println("Testing LED...");
  delay(2000);
  M5.Axp.SetLed(0);
  delay(1000);
  M5.Axp.SetLed(1);
  delay(1000);
  M5.Axp.SetLed(0);
  delay(1000);
  M5.Axp.SetLed(1);
  delay(1000);
  M5.Axp.SetLed(0);
  delay(1000);
  M5.Axp.SetLed(1);
  delay(1000);
  M5.Axp.SetLed(0);
  delay(1000);
  M5.Axp.SetLed(1);
  delay(2000);

  // Test display colors
  M5.Lcd.setCursor(1, 1);
  M5.Lcd.clear();
  M5.Lcd.println("Testing display colors...");
  delay(2000);
  M5.Lcd.fillScreen(WHITE);
  delay(2000);
  M5.Lcd.fillScreen(BLACK);
  delay(2000);
  M5.Lcd.fillScreen(RED);
  delay(2000);
  M5.Lcd.fillScreen(GREEN);
  delay(2000);
  M5.Lcd.fillScreen(BLUE);
  delay(2000);

  // Test vibration
  M5.Lcd.setCursor(1, 1);
  M5.Lcd.clear();
  M5.Lcd.println("Testing vibration...");
  delay(2000);
  M5.Axp.SetLDOEnable(3, true);
  delay(2000);
  M5.Axp.SetLDOEnable(3, false);
  delay(2000);

  // Done
  M5.Lcd.setCursor(1, 1);
  M5.Lcd.clear();
  M5.Lcd.println("Done!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
