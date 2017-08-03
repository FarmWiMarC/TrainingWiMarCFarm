#include <math.h>
int value1;
void setup() 
{
  Serial.begin(9600);
}
void loop() 
{
value1 = analogRead(0);
Serial.println("Light out put = Volt"); 
Serial.println(value1 * (5.0 / 1023.0)); 

Serial.println("Light out put = W/m2"); 
Serial.println((((value1 * (5.0 / 1023.0)) + 0.0535)/0.00418)-12);

Serial.println("Light out put = Luk"); 
Serial.println(pow(((value1 * (5.0 / 1023.0)) / 0.00197),1.5));

delay(5000);
}
