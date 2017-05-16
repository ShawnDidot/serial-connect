#include <stdio.h>
#include <conio.h>
#include "test\tserial.h"
#include "test\bot_control.h"
class serial comm; //serial is a class type defined in these files, used for referring to the communication device
void main() {
char data; //To store the character to send
printf("Enter character to be sent"); //User prompt
scanf("%c",&data); //User input
comm.startDevice("COM3", 9600);
/* �COM 2?refers to the com port in which the USB to SERIAL port is attached. It is shown by right clicking on my computer, then going to properties and then device manager
9600 is the baud-rate in bits per second */
comm.send_data(data); //The data is sent through the port
comm.stopDevice(); //The device is closed down
getch();
} 