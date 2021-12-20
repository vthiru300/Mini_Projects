/*
Exploring Arduino - Code Listing 12-2: Simple Timer Interrupt Blink Test
http://www.exploringarduino.com/content/ch12
*/

//Using Timer Interrupts with the Arduino
#include <TimerOne.h>
const int LED=13;
 
void setup() 
{
  pinMode(LED, OUTPUT);  
  Timer1.initialize(1000000); // set a timer of length 1000000 microseconds (1 second)
  Timer1.attachInterrupt(blinky); //Runs "blinky" on each timer interrupt
}
 
void loop()
{
  //Put any other code here.
}
 
//Timer interrupt function
void blinky()
{
  digitalWrite(LED, !digitalRead(LED)); //Toggle LED State
}

