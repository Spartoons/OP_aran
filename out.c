#include <stdio.h>
#include <wiringPi.h>

int main (void)
{
	int i = 0;

	wiringPiSetup();

	for (i = 0; i < 21; i++)
  {
		pinMode (i, OUTPUT) ;
  }

	for (i = 0; i < 21; i++)
  {
    digitalWrite (i, LOW);
	}

	return 0;
}
