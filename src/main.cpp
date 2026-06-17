//hello hooman 

#include<Arduino.h>
#include<Wire.h>
#include<LiquidCrystal_I2C.h>

LiquidCrystal_I2C ganja(0x27, 16, 2);

void setup(){

  Wire.begin(21, 22);
  ganja.init();
  ganja.backlight();

  ganja.setCursor(0, 0);
  ganja.print("consuming  ");
  ganja.setCursor(0, 1);
  ganja.print("ganjaaaaaa.....");

}

void loop(){
  //emptyyyyyyyyyyyyyy
}