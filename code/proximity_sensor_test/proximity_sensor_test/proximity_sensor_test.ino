int proximity_sensor_pin = 7;
void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(proximity_sensor_pin, INPUT);
}

void loop() 
{
  if ( digitalRead(proximity_sensor_pin) )
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
  else
  {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  
}
