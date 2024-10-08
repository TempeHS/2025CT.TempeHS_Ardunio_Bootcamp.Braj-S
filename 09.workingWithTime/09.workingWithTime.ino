/*
  Author: 

  Learning Intention:
  The students understand how time is used in microcontrollers and best practices
  
  Success Criteria:
    1.  I understand why delay(1000) whilst easy is not the preferred way of time event management
    2.  I can use the millis() method and binary logic to trigger events by time
    3.  I can explain the difference and benefits in serial monitor plotting by using millis() compared to delay()
    4.  I understand how time can be used to send a communication frequency by using micros()

  Documentation: 
    https://www.arduino.cc/reference/en/#functions
  Schematic: 
    https://www.tinkercad.com/things/6xiog2F1CWa?sharecode=3a9x0v0FGQ6Q67Ixs5Zh61QGa0Aa_7es-vswPhLp-PY
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/09.workingWithTime/Bootcamp-workingWithTime.png
*/
static unsigned int blueLED = 6;
static unsigned int greenLED =2;
unsigned int blueLEDstate = LOW;
unsigned int greenLEDstate = LOW;

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become to large for an int to store
unsigned int blueLEDPreviousMillis = 0;
unsigned long greenLEDPreviousMillis = 0;

// use a long so you can mathematically compare with the variable prevousMillis without conversion
const unsigned long blueLEDinterval = 2000;
const unsigned long greenLEDinterval = 9000;

void setup() 

{
  Serial.begin(9600);
  Serial.println("Debug");
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  
}


void loop() {

  //check to see if it's time to blink the LED; tjat is, if the difference
  //between the current time and alst time you blinked the led is bigger than
  //the interval at which you want to blink the led
  unsigned long currentMillis = millis();

if (currentMillis - blueLEDPreviousMillis >= blueLEDinterval) 
{
  blueLEDstate = !blueLEDstate;
  digitalWrite(blueLED, blueLEDstate);
  blueLEDPreviousMillis = currentMillis;
}

if (currentMillis - greenLEDPreviousMillis >= greenLEDinterval) 
{
  greenLEDstate = !greenLEDstate;
  digitalWrite(greenLED, greenLEDstate);
  greenLEDPreviousMillis = currentMillis;
}

  Serial.print("Millis:");
  Serial.print(currentMillis);
  Serial.print(",");
  Serial.print("blueLED:");
  Serial.print(blueLEDstate);
  Serial.print(",");
  Serial.print("greenLED:");
  Serial.println(greenLEDstate);



}

