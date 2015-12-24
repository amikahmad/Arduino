int thermistorPin = A0; //analog pin 0

void setup(){
  Serial.begin(9600);
}

void loop(){
  int thermistorReading = analogRead(thermistorPin); 

  Serial.println(thermistorReading);
  delay(250); //just here to slow down the output for easier reading
}
