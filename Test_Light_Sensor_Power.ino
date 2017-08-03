#include <math.h>
int value1;
int value2;
int value3;

void setup() 
{
  Serial.begin(9600);
}
void loop() 
{
value1 = analogRead(0);
value2 = value1 * (5.0 / 1023.0);
value3 = (value2 + 0.0989)/0.0044;
//value2 = analogRead(5);
//value3 = analogRead(10);

Serial.println("Light out put = Volt"); 
Serial.println(value1 * (5.0 / 1023.0)); 

Serial.println("Light out put = W/m2"); 
Serial.println((((value1 * (5.0 / 1023.0)) + 0.0535)/0.00418)-12);

Serial.println("Light out put = Luk"); 
//Serial.println(pow((value1 * (5.0 / 1023.0)) / 0.001322),(1.41));
Serial.println(pow(((value1 * (5.0 / 1023.0)) / 0.00197),1.5));

//Serial.println(value1); 

//Serial.println(36-(value1 * 0.015));
//Serial.println(value1 * (5.0 / 1023.0));
//Serial.println(value1 * (5000.0 / 1023.0));
//Serial.println("MoistureA5 = %W");
//Serial.println(value2 * (5.0 / 1023.0));
//Serial.println("MoistureA10 = %W");
//Serial.println(value3 * (5.0 / 1023.0));

//Serial.println("Temp = Celsius"); 
//Serial.println(value2);
//Serial.println((value2 - 500)/10);
//Serial.println(value2 * (5.0 / 1023.0));
//Serial.println(((value2 * (5.0 / 1023.0)-500)/10));
//Serial.println(((value2 * (5.0 / 1023.0)*1000)-500)/10);
delay(10000);
}
