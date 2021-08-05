int inputpin = 2;
int outputpin = 10;
int led = HIGH;
void setup()
{
  pinMode(inputpin,INPUT);
  pinMode(outputpin,OUTPUT);
  Serial.begin(9600);
  
  attachInterrupt(digitalPinToInterrupt(inputpin),LED,CHANGE);
}
void loop()
{
  delay(500);
}
void LED()
{
  led =!led;
  digitalWrite(outputpin,led);
  Serial.println(led);
}
