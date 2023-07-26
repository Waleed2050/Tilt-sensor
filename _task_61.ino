const int MOTOR = 6;
const int sensor = 8;
int OUT;
int read ;
void setup()
{
  pinMode(MOTOR, OUTPUT);
  pinMode(sensor, INPUT);
Serial.begin(9600);
}
void loop()
{  read = digitalRead(sensor);
 if (read == HIGH){digitalWrite(MOTOR,HIGH);}
 else {digitalWrite(MOTOR,LOW);}
}