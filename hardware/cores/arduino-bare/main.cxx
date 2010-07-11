#include <WProgram.h>

void setup();
void loop();

int main(void)
{
	setup();
	sei();
    
	for (;;)
		loop();
        
	return 0;
}

