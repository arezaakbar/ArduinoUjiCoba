String data;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 5:
  int sensorValue = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1024.0);
  // print out the value you read:
  
  float a = voltage * 1; //lvl adc
  float b = voltage * 2; //fuel persen
  float c = voltage * 3; //afr
  float d = voltage * 4; //rpm
  float e = voltage * 5; //freq

  //data = a.ToString+","+b.ToString+","+c.ToString;
  data = String(a)+"-"+String(b)+"-"+String(c)+"-"+String(d)+"-"+String(e);
  
   

  Serial.println(data);
  //Serial.print('/n');
  //Serial.println(data);

  delay(500);
}