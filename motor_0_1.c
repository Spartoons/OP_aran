#include <stdio.h>
#include <wiringPi.h>

int main (void)
{
  int i = 4;

	wiringPiSetup();

	pinMode (i, OUTPUT) ;


	while (1)
  {
		digitalWrite (i, HIGH);
    printf("%d", i);
		delay (1000);
    digitalWrite (i, LOW);
    delay (1000);
	}

	return 0;
}
