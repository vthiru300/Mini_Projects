/*
Exploring Arduino - Code Listing 6-5: RGB LED Control via Serial
http://www.exploringarduino.com/content/ch6
*/

//Sending Multiple Variables at Once

//Define LED Pins
const int RED   =11;
const int GREEN =10;
const int BLUE  =9;

//Variables for RGB levels
int rval = 0;
int gval = 0;
int bval = 0;

void setup()
{
  Serial.begin(9600); //Serial Port at 9600 baud
 
  //Set pins as outputs
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop()
{
  //Keep working as long as data is in the buffer
  while (Serial.available() > 0)
  {
    rval = Serial.parseInt();  //first valid integer
    gval = Serial.parseInt();  //second valid integer
    bval = Serial.parseInt();  //third valid integer

    if (Serial.read() == '\n') //done transmitting
    {
      //set LED
      analogWrite(RED, rval);
      analogWrite(GREEN, gval);
      analogWrite(BLUE, bval);
    }
  }
}

