/* mbed Microcontroller Library
* Copyright (c) 2022 ARM Limited
* SPDX-License
*/

#include "mbed.h"

/*blinking LED

int main()
{
    DigitalOut led(LED1);

    while(1){
        led = !led;
        sDelay(500);
    }
}

*/

/*LED when button is pressed


int main()
{
    DigitalIn myButton(BUTTON1);
    DigitalOut LED(LED1);
    if(myButton.is_connected()) {
        printf("Button is connected and initialized \n\r");
        led=1;
    }

    while (1) {
        printf("Button has value : %d \n\r", myButton.read());
        ThisThread::sleep_for(250ms);
    }
}
*/




int main()
{
    AnalogOut led(LED1);
    float output = 0;
    
    while(1){
        output = (output >= 1) ? 0 : 0.1 + output;
        led = output;
        printf("Output: %f \n", output);
        ThisThread::sleep_for(200ms);
    }

}