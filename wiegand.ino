
#include "wiegandOutput.h"


//Initialize at the pin 8 (Data 0) and 9 (Data 1)
WiegandOut wiegandOut(D4,D3);
long count = 0;

void setup() {
    Serial.begin(9600);
}

void loop(){
    wiegandOut.send(count,26,true); // Send 26 bits with facility code
    delay(1000);
    wiegandOut.send(count,34,true);   // Send 34 bits with facility code
    delay(1000);
    wiegandOut.send(count,26,false); // Send 26 bits without facility code
    delay(1000);
    wiegandOut.send(count,34,false); // Send 34 bits without facility code
    delay(1000);
    count++;
    Serial.println(count);
}
