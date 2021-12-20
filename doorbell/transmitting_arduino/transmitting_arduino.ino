/*
Exploring Arduino - Code Listing 11-5: Transmitting Arduino
http://www.exploringarduino.com/content/ch11
*/

//Code running on an Arduino to transmit the doorbell push

const int BUTTON =12; //Button on pin 12

void setup()
{
  //NOTE: On the Leonardo, the RX/TX serial pins are
  //not multiplexed with USB like they are on Uno.
  //This sketch is written for the Leonardo (Serial1 = RX/TX pins)
  //If you are using the Uno, change Serial1 to Serial, here and below
  Serial1.begin(9600); //Start Serial
}

void loop()
{
  Serial1.println(digitalRead(BUTTON)); //Send the button's state
  delay(50); //Small delay so we don't flood the receiver
}

