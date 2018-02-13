#include <FPS_GT511C3.h>
bool recv=false;

FPS_GT511C3 fps(115200, 2);

void setup()
{

  Serial.begin(9600); //set up Arduino's hardware serial UART
  fps.UseSerialDebug = true; // so you can see the messages in the serial debug screen
  fps.Open(); //send serial command to initialize fps
  //fps.ChangeBaudRate(115200);
  delay(100);
  //Serial.begin(115200);
  Serial.println("set up");
  delay(1000);
}

void loop()
{
  Serial.println("ON");
  // FPS Blink LED Test
  recv=fps.SetLED(true); // turn on the LED inside the fps
  Serial.println("ON");
  delay(1000);
  recv=fps.SetLED(false);// turn off the LED inside the fps
  Serial.println("OFF");
  delay(1000);
}
