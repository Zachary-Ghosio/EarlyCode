
/*description: Code to read temperature in Kelvin, convert it to Celsius, print Celcius on an
LCD panel, then Convert it to Fahrenheit, and display this on the LCD panel.
again to Fahrenheit, printing all three values, and repeating.
Zack Ghosio
10/31/14
For: CSC121
*/
float maximum=1023.0;
float Kelvin;
float x;
float Celcius;
float Fahrenheit;
#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly: 
  x=analogRead(A5);
  Kelvin=5.0*(x/maximum)*100.0;
  Celcius=Kelvin-(273.15+2.5);
  Fahrenheit=Celcius*(9.0/5.0)+32.0;

  lcd.setCursor(0,0);
  lcd.print (Celcius);
  lcd.print (" Celcius");
  lcd.setCursor(0,1);
  lcd.print (Fahrenheit);
  lcd.print (" Fahrenheit");
  delay (1000);
}

