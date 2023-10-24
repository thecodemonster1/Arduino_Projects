int redled =5; // initialize digital pin 5.
int yellowled =4; // initialize digital pin 4.
int greenled =3; // initialize digital pin 3.

void setup()
{
  pinMode(redled, OUTPUT);// set the pin with red LED as “output”
  pinMode(yellowled, OUTPUT); // set the pin with yellow LED as “output”
  pinMode(greenled, OUTPUT); // set the pin with green LED as “output”
}

void loop()
{
  digitalWrite(greenled, HIGH);
  // delay(5000); // GREEN led for 5 sec
  for (int i = 5; i > 0; i--){
    delay(1000); // 1 sec delay
  }
  digitalWrite(greenled, LOW);
  delay(50); 
  digitalWrite(yellowled, HIGH);
  delay(5000); // YELLOW led for 5 sec
  digitalWrite(yellowled, LOW);
  delay(50);
  digitalWrite(redled, HIGH);
  delay(5000); // RED led for 5 sec
  digitalWrite(redled, LOW);
  delay(50);
}