int pirpin = 2;
int Red_LEDpin = 10;
int Green_LEDpin = 12;
int pushB_pin = 3;

int Red_LED_state = LOW;
int Green_LED_state = LOW;

void setup()
{
  pinMode(pirpin,INPUT);
  pinMode(pushB_pin,INPUT);
  pinMode(Red_LEDpin,OUTPUT);
  pinMode(Green_LEDpin,OUTPUT);
  Serial.begin(9600);
  
  attachInterrupt(digitalPinToInterrupt(pirpin),RED,CHANGE);
  attachInterrupt(digitalPinToInterrupt(pirpin),GREEN,CHANGE);
}

void loop()
{
  delay(100);
}

void RED()
{
  Red_LED_state =!Red_LED_state;
  digitalWrite(Red_LEDpin,Red_LED_state);
  Serial.println("RED LED IS ON");
}

void GREEN()
{
  if (digitalRead(pushB_pin) == HIGH)
  {
    digitalWrite(Green_LEDpin, HIGH);
    Serial.println("GREEN LED IS ON");
  }
  else
  {
    digitalWrite(Green_LEDpin,LOW);
  }
}
