int buzzerPin=8;

void setup() {
 pinMode(buzzerPin, OUTPUT);
 }

void loop() {
  mario(buzzerPin);
  }

void mario(int pin) {
  tone(pin, 659, 150);  //E5
  delay(150);  //pause for key transition
  tone(pin, 659, 150);  //E5
  delay(150);  //pause for key transition
  tone(pin, 659, 150);  //E5
  delay(150);  //pause for key transition
  delay(150);  //pause for a Quarter rest (1/4)
  tone(pin, 523, 150);  //C5
  delay(150);  //pause for key transition
  tone(pin, 659, 150);
  delay(150);  //pause for key transition
  delay(150);  //pause for a Quarter rest (1/4)
  tone(pin, 784, 150);  //G5
  delay(3000); 
  } 
