/* ArduSensor Flex Read

Reads the ArduSensor Flex, and prints how much bend there is on the Serial 
monitor

Qtechknow kits required:
  ArduSensor Flex
  
made on 12 July 12
created by Quin
*/

int ArduSensorValue;   // variable to store the value of the ArduSensor Flex

void setup() {
  Serial.begin(9600);  // start Serial communication at 9600 baud
}

void loop() {
  // assign the variable to the value of the ArduSensor Flex
  ArduSensorValue=analogRead(0);

  if(ArduSensorValue <= 3) {
    Serial.print("Backwards ");  // if the bend is going backwards, print it
    Serial.println(ArduSensorValue);  // print the value on the Serial monitor
  }
  if(ArduSensorValue >= 7) {
    Serial.print("Forwards ");   // if the bend is going forwards, print it
    Serial.println(ArduSensorValue);  // print the value on the Serial monitor
  }
  
  if(ArduSensorValue == 4 || ArduSensorValue == 5 || ArduSensorValue == 6) {
    Serial.println("Straight in the middle");  // print that it is straight in
    // the middle if it has a neutral value
  }
  delay(100);
}
