#include "button.h"

Button btn1;
Button btn2;

void
setup(void)
{
    btn1.begin(PUSH_00);
    btn2.begin(PUSH_01);
    pinMode(INTLED, OUTPUT);
}

void
loop(void)
{
#if 1
    // Original example

    if (btn1.debounce())             // press button 1 to turn on the LED
        digitalWrite(INTLED, HIGH);
    if (btn2.debounce())             // press button 2 to turn off the LED
        digitalWrite(INTLED, LOW);
#else

    // Same, but using only 1 button
    //  Alternatively, turn on and off the LED

    static int led_state = LOW;

    if (btn1.debounce())
    {
        led_state = !led_state;
        digitalWrite(INTLED,led_state);
    }
    delay(5);

#endif
}
