#include <string.h>

String incomingByte;   // for incoming serial data
int led = 13;
void setup()
{
  Serial.begin(9600); // // opens serial port, sets data rate to 9600 bps

  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}

void loop()
{ // turn the LED off by making the voltage LOW

  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();//not using this

    int x;
    int y;
    //x=int(incomingByte[0])*100+int(incomingByte[1])*10+int(incomingByte[2])*1;
    //y=int(incomingByte[4])*100+int(incomingByte[5])*10+int(incomingByte[6])*1;

    if (incomingByte.compareTo("TEST")  != 0)
    Serial.println(incomingByte.toInt());
      digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    //printf("%d"&x);
    //printf("%d"&y);

    delay(500);
  }
}
