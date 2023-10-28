int sensorPin = A0 ;
int led = 3;
int value = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  //Set Pin3 as output
}
void loop()
{
  value = analogRead(sensorPin);
  Serial.println(value, DEC);
  delay(50);
  if (value > 800){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
  
}

