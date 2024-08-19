/*
  Author: Braj S 14/08/2024
  
  Learning Intention:
  The students will learn about the different data types used in the C++ language
  and how they can be converted for storage or computation
  
  Success Criteria:
    1.  I understand and can store variables in the datatypes string, interger, float, longs and boolean
    2.  I know how to access more information about the different datatypes in the documentation
    3.  I Understand how (1, HIGH and true) and (0, LOW, false) all represent the same concept and can be
        used interchangeably in an INO sketch
    4.  I understand the difference between an int and an unsigned int or a long or an unsigned long
    5.  I understand the difference between a global variable and a function variable 

  Documentation: 
    https://www.arduino.cc/reference/en/#variables
    https://www.arduino.cc/reference/en/language/variables/data-types/stringobject/
*/

int mtInt =3;
int mtIntValue = 5;
String myString = ("Hello World");
float myFloatingPoint =3.14;
bool myValue = false;


void setup() {
  Serial.begin(9600);
  Serial.println(myString + " :" + myIntValue);
}

void loop() {

}