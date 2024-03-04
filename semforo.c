#include <stdio.h>
#include <wiringPi.h>

int main(void)
{
    int r = 10, y = 13, g = 16;
    
    wiringPiSetup();
    pinMode (r, OUTPUT);
    pinMode (y, OUTPUT);
    pinMode (g, OUTPUT);
    while (1)
    {
        digitalWrite(g, HIGH);
        printf("Green light\n");
        digitalWrite(r, LOW);
        digitalWrite(y, LOW);
        delay(1000);

        digitalWrite(y, HIGH);
        printf("Yellow light\n");
        digitalWrite(r, LOW);
        digitalWrite(g, LOW);
        delay(1000);

        digitalWrite(r, HIGH);
        printf("Red light\n");
        digitalWrite(g, LOW);
        digitalWrite(y, LOW);
        delay(1000);
    }

    return 0;
}
