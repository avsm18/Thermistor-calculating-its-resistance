#define SERIESRESISTOR 10000 // so this is a thermistor
#define THERMISTORPIN A0

void setup() {  // calculating the resistance of thermistor and from that calculating the temperature

  Serial.begin(9600); // speed of communication
  
  
    
 
  
}

void loop() {

float reading;
reading = analogRead(THERMISTORPIN); // SO THIS IS THE THERMISTOR PIN 
Serial.print("Analog reading : ");
Serial.println(reading);
// now calculate the resistance of thermistor
reading = (1023/reading) - 1;
reading = SERIESRESISTOR/reading;
Serial.print("Thermistor resistance : ");
Serial.println(reading); // and simply print the resistance then this would be printed













  
}
