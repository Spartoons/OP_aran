#include <stdio.h>
#include <wiringPi.h>

int main (void)
{
	int r = 10, y = 13, g = 16;

	wiringPiSetup();


  while (True) {
    digitalWrite (g, HIGH);
    printf();
    digitalWrite (r, LOW);
    printf();
    digitalWrite (y, LOW);
		delay (7000);
    digitalWrite (y, HIGH);
    printf();
    digitalWrite (r, LOW);
    printf();
    digitalWrite (g, LOW);
		delay (4000);
    digitalWrite (r, HIGH);
    printf();
    digitalWrite (g, LOW);
    printf();
    digitalWrite (y, LOW);
		delay (6000);

	return 0;
}
