/*
Exploring Arduino - Code Listing 6-6: Arduino Code to send Data to the Computer
http://www.exploringarduino.com/content/ch6
*/

//Sending POT value to the computer

const int POT=0; //Pot on Analog Pin 0

int val; //For holding mapped pot value

void setup()
{
  Serial.begin(9600); //Start Serial
}

void loop()
{
  val = map(analogRead(POT), 0, 1023, 0, 255); //Read and map POT
  Serial.println(val);                         //Send value
  delay(50);                                   //Delay so we don't flood the computer
}

