#include <stdio.h>
#include <wiringPi.h>

int main(void)
{
    int r = 10, y = 13, g = 16;

    wiringPiSetup();

    while (1)
    {
        digitalWrite(g, HIGH);
        printf("Green light\n");
        digitalWrite(r, LOW);
        printf("Red light\n");
        digitalWrite(y, LOW);
        delay(7000);

        digitalWrite(y, HIGH);
        printf("Yellow light\n");
        digitalWrite(r, LOW);
        printf("Red light\n");
        digitalWrite(g, LOW);
        delay(4000);

        digitalWrite(r, HIGH);
        printf("Red light\n");
        digitalWrite(g, LOW);
        printf("Green light\n");
        digitalWrite(y, LOW);
        delay(6000);
    }

    return 0;
}
