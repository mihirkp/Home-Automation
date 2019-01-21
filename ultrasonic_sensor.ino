

const int trigPin = 2;
const int echoPin = 4;

void setup() {
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  long duration, inches, cm;

  
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  if(cm<15)
  {
    digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
  else
  {
    digitalWrite(8, LOW);
  }
  delay(10);
}

long microsecondsToInches(long microseconds)
{
  
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
  
  return microseconds / 29 / 2;
}
