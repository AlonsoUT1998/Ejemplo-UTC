int led = 13;
char dato;
void setup () {
  pinMode (13,OUTPUT);
  Serial.begin(9600);

}

void loop () {
if(Serial.available() > 0)
{
  dato = Serial.read();
  if(dato == '1')
  {
    digitalWrite(13,HIGH);
    delay(5000);
  }
  if(dato == '1')
  {
    digitalWrite(13,LOW);
    delay(1000);
  }
}
}

