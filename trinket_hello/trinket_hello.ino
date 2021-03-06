      /*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.

  To upload to your Gemma or Trinket:
  1) Select the proper board from the Tools->Board Menu
  2) Select USBtinyISP from the Tools->Programmer
  3) Plug in the Gemma/Trinket, make sure you see the green LED lit
  4) For windows, install the USBtiny drivers
  5) Press the button on the Gemma/Trinket - verify you see
     the red LED pulse. This means it is ready to receive data
  6) Click the upload button above within 10 seconds

  This code runs on the Trinket @ 8MHz
*/
 
int led = 1; // blink 'digital' pin 1 - AKA the built in red LED

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);

}

void pulse_100() {
    digitalWrite(led, HIGH); 
    delay(100);
    digitalWrite(led, LOW);
    delay(100);

  
}

// the loop routine runs over and over again forever:
void loop() {
    delay(1000);
    pulse_100();
    pulse_100();
    pulse_100();
    
}
    
