
const int gasPin = A0; 


void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println(analogRead(gasPin));
        if
	delay(1000);
}

