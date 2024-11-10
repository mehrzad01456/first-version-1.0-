
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup(){
  Serial.begin(9600);

lcd.init();
lcd.init();

lcd.backlight();
lcd.setCursor(3, 0);
lcd.print(" number: ");
}



void loop() {
  while (Serial.available() > 0) {
    int n = Serial.parseInt();

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("number:");
    lcd.setCursor(0, 1);
    lcd.print(n);
  }
}
