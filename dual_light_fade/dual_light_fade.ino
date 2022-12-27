const int LED_ao_R = 3;
const int LED_ao_Y = 6;
void setup() {
  pinMode(LED_ao_R, OUTPUT);
  pinMode(LED_ao_Y, OUTPUT);
  
}

void loop() {
  for (int index = 0; index <= 255; index++){
    analogWrite(LED_ao_R, index);
    delay(15);
  }
  for (int index = 255; index > 0; index--){
    analogWrite(LED_ao_R, index);
    delay(15);  
  }
  for (int index = 0; index <= 255; index++){
    analogWrite(LED_ao_Y, index);
    delay(15);
  }
  for (int index = 255; index > 0; index--){
    analogWrite(LED_ao_Y, index);
    delay(15);  
  }
}
